#include "LiminalRoomGenerator.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"
#include "Misc/DateTime.h"
#include "Misc/Paths.h"

static const FIntPoint DirN(0, 1);
static const FIntPoint DirS(0, -1);
static const FIntPoint DirE(1, 0);
static const FIntPoint DirW(-1, 0);

static float CardinalDirToYawDegrees(const FIntPoint& Dir)
{
	// UE world yaw convention (Z-up):
	//  +X => 0
	//  +Y => +90
	//  -X => 180
	//  -Y => -90 (or 270)
	if (Dir == DirE) return 0.f;
	if (Dir == DirN) return 90.f;
	if (Dir == DirW) return 180.f;
	if (Dir == DirS) return -90.f;
	return 0.f;
}

static float DirToYawDegrees(const FIntPoint& Dir, ELiminalPrefabForwardAxis ForwardAxis)
{
	// If the prefab's authored "forward" at yaw=0 is +Y, subtract 90 so that:
	//  - desired +Y => yaw 0
	//  - desired +X => yaw -90
	const float AxisOffset = (ForwardAxis == ELiminalPrefabForwardAxis::ForwardY) ? -90.f : 0.f;
	return CardinalDirToYawDegrees(Dir) + AxisOffset;
}

// #region agent log
static void WriteDebugLog(const FString& Location, const FString& Message, const FString& DataJson)
{
	const FString DebugLogFilePath = TEXT("u:/Unreal Projects/Liminal/Plugins/LiminalRoomGen/.cursor/debug.log");
	const int64 Timestamp = FDateTime::Now().ToUnixTimestamp() * 1000;
	const FString LogLine = FString::Printf(TEXT("{\"sessionId\":\"debug-session\",\"runId\":\"run1\",\"hypothesisId\":\"A\",\"location\":\"%s\",\"message\":\"%s\",\"data\":%s,\"timestamp\":%lld}\n"), *Location, *Message, *DataJson, Timestamp);
	FFileHelper::SaveStringToFile(LogLine, *DebugLogFilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}

static void LogDelegateState(const FString& Location, const FString& DelegateName, const FMulticastScriptDelegate& Delegate)
{
	// For dynamic multicast delegates, check both C++ and Blueprint bindings
	const TArray<UObject*>& BoundObjects = Delegate.GetAllObjects();
	const int32 BoundCount = BoundObjects.Num();
	
	// Also check if the delegate has any invocations
	FString BoundObjectNames;
	for (UObject* Obj : BoundObjects)
	{
		if (Obj)
		{
			if (!BoundObjectNames.IsEmpty()) BoundObjectNames += TEXT(", ");
			BoundObjectNames += Obj->GetName();
		}
	}
	
	WriteDebugLog(Location, FString::Printf(TEXT("Delegate state: %s"), *DelegateName), 
		FString::Printf(TEXT("{\"boundCount\":%d,\"boundObjects\":\"%s\"}"), BoundCount, *BoundObjectNames));
}
// #endregion

ALiminalRoomGenerator::ALiminalRoomGenerator()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	USceneComponent* Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);
}

void ALiminalRoomGenerator::BeginPlay()
{
	Super::BeginPlay();

	// #region agent log
	WriteDebugLog(TEXT("LiminalRoomGenerator.cpp:BeginPlay"), TEXT("BeginPlay called"), FString::Printf(TEXT("{\"instance\":\"%s\",\"world\":\"%s\"}"), *GetName(), GetWorld() ? *GetWorld()->GetName() : TEXT("NULL")));
	
	// Check delegate bindings at BeginPlay
	LogDelegateState(TEXT("LiminalRoomGenerator.cpp:BeginPlay"), TEXT("GenerationStarted"), GenerationStarted);
	LogDelegateState(TEXT("LiminalRoomGenerator.cpp:BeginPlay"), TEXT("FirstRoomSpawned"), FirstRoomSpawned);
	LogDelegateState(TEXT("LiminalRoomGenerator.cpp:BeginPlay"), TEXT("GenerationComplete"), GenerationComplete);
	LogDelegateState(TEXT("LiminalRoomGenerator.cpp:BeginPlay"), TEXT("GenerationStopped"), GenerationStopped);
	// #endregion

	// Test the delegate system immediately to verify it works
	UE_LOG(LogTemp, Warning, TEXT("[LiminalRoomGen] BeginPlay - Testing delegate system, Instance: %s"), *GetName());
	TestDelegate.Broadcast(TEXT("BeginPlay Test"));

	if (bGenerateOnBeginPlay)
	{
		GenerateRuntime(true);
	}
}

void ALiminalRoomGenerator::Generate()
{
	// IMPORTANT: Spawning Level Instances directly from a Details-panel click can re-enter the LevelInstanceSubsystem
	// via PropertyEditor/Slate and trigger an assertion. Defer the actual work to the next editor tick.
	bPendingEditorGenerate = true;
}

void ALiminalRoomGenerator::ClearGeneration()
{
	bPendingEditorClear = true;
}

bool ALiminalRoomGenerator::ShouldTickIfViewportsOnly() const
{
	return true;
}

void ALiminalRoomGenerator::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	// Only do work when requested.
	if (bPendingEditorClear)
	{
		bPendingEditorClear = false;
		ClearRuntime();
	}

	if (bPendingEditorGenerate)
	{
		bPendingEditorGenerate = false;
		GenerateRuntime(true);
	}
}

void ALiminalRoomGenerator::GenerateRuntime(bool bClearFirst)
{
	if (bClearFirst)
	{
		ClearRuntime();
	}

	// Track streaming completion for this generation.
	PendingStreamLoads = 0;
	bGenerationCompleteBroadcasted = false;

	// #region agent log
	WriteDebugLog(TEXT("LiminalRoomGenerator.cpp:101"), TEXT("GenerateRuntime entry"), FString::Printf(TEXT("{\"bClearFirst\":%d,\"this\":\"%s\"}"), bClearFirst ? 1 : 0, *GetName()));
	LogDelegateState(TEXT("LiminalRoomGenerator.cpp:117"), TEXT("GenerationStarted"), GenerationStarted);
	// #endregion

	// Broadcast generation started event
	// For dynamic multicast delegates, Broadcast() should work even if GetAllObjects() returns 0
	// This is because Blueprint bindings are stored in the script delegate system, not GetAllObjects()
	const int32 BoundBeforeBroadcast = GenerationStarted.GetAllObjects().Num();
	const bool bGenStartedIsBound = GenerationStarted.IsBound();
	UE_LOG(LogTemp, Warning, TEXT("[LiminalRoomGen] Broadcasting GenerationStarted - Bound count: %d, IsBound: %d, Instance: %s"), BoundBeforeBroadcast, bGenStartedIsBound ? 1 : 0, *GetName());
	
	// Always call Broadcast() - it's safe and will call Blueprint-bound functions even if GetAllObjects() is empty
	GenerationStarted.Broadcast();
	
	const int32 BoundAfterBroadcast = GenerationStarted.GetAllObjects().Num();

	// #region agent log
	WriteDebugLog(TEXT("LiminalRoomGenerator.cpp:120"), TEXT("GenerationStarted broadcast called"), 
		FString::Printf(TEXT("{\"boundBefore\":%d,\"boundAfter\":%d}"), BoundBeforeBroadcast, BoundAfterBroadcast));
	// #endregion

	const int32 EffectiveSeed = bUseRandomSeed ? FMath::Rand() : Seed;
	Rng.Initialize(EffectiveSeed);

	ResetGrid();

	TArray<FIntPoint> Path;
	if (!BuildNonOverlappingPath(Path))
	{
		UE_LOG(LogTemp, Warning, TEXT("[LiminalRoomGen] Failed to build a path. Try a larger grid or smaller path length."));
		return;
	}

	if (!PlaceExitCells(Path))
	{
		UE_LOG(LogTemp, Warning, TEXT("[LiminalRoomGen] Failed to place exit cells. Try a larger grid."));
		return;
	}


	// StartFacingDir is computed in ResetGrid() (start placed on edge and forced to face inward).
	// Exit faces outward from the lounge into the Exit cell.
	ExitFacingDir = (ExitCell - ExitTransitionCell);

	SpawnPrefabs();
	if (bSpawnWalls)
	{
		SpawnWalls();
	}

	// If everything is already loaded (e.g. PIE/editor cached), fire completion immediately.
	if (PendingStreamLoads == 0 && !bGenerationCompleteBroadcasted)
	{
		bGenerationCompleteBroadcasted = true;
		
		// #region agent log
		LogDelegateState(TEXT("LiminalRoomGenerator.cpp:153"), TEXT("GenerationComplete"), GenerationComplete);
		// #endregion
		
		const int32 BoundBefore = GenerationComplete.GetAllObjects().Num();
		const bool bGenCompleteIsBound = GenerationComplete.IsBound();
		UE_LOG(LogTemp, Warning, TEXT("[LiminalRoomGen] Broadcasting GenerationComplete (immediate) - Bound count: %d, IsBound: %d, Instance: %s"), BoundBefore, bGenCompleteIsBound ? 1 : 0, *GetName());
		GenerationComplete.Broadcast(StartLevel);

		// #region agent log
		WriteDebugLog(TEXT("LiminalRoomGenerator.cpp:157"), TEXT("GenerationComplete broadcast called (immediate)"), FString::Printf(TEXT("{\"PendingStreamLoads\":%d,\"boundBefore\":%d}"), PendingStreamLoads, BoundBefore));
		// #endregion
	}

	// Optional: flushing can stall/hang the editor on large layouts. Leave off unless you need immediate visibility.
	if (bFlushStreamingAfterGenerate)
	{
		if (UWorld* World = GetWorld())
		{
			World->FlushLevelStreaming(EFlushLevelStreamingType::Visibility);
		}
	}

}

void ALiminalRoomGenerator::ClearRuntime()
{
	// #region agent log
	WriteDebugLog(TEXT("LiminalRoomGenerator.cpp:159"), TEXT("ClearRuntime entry"), FString::Printf(TEXT("{\"SpawnedPrefabsCount\":%d}"), SpawnedPrefabs.Num()));
	// #endregion

	PendingStreamLoads = 0;
	bGenerationCompleteBroadcasted = false;

	if (UWorld* World = GetWorld())
	{
		for (ULevelStreamingDynamic* Stream : SpawnedPrefabs)
		{
			if (!Stream) continue;
			Stream->SetIsRequestingUnloadAndRemoval(true);
		}

		World->FlushLevelStreaming(EFlushLevelStreamingType::Full);
	}

	SpawnedPrefabs.Empty();
	Grid.Empty();

	// #region agent log
	LogDelegateState(TEXT("LiminalRoomGenerator.cpp:197"), TEXT("GenerationStopped"), GenerationStopped);
	// #endregion

	// Broadcast generation stopped event
	const int32 BoundBefore = GenerationStopped.GetAllObjects().Num();
	const bool bGenStoppedIsBound = GenerationStopped.IsBound();
	UE_LOG(LogTemp, Warning, TEXT("[LiminalRoomGen] Broadcasting GenerationStopped - Bound count: %d, IsBound: %d, Instance: %s"), BoundBefore, bGenStoppedIsBound ? 1 : 0, *GetName());
	GenerationStopped.Broadcast();

	// #region agent log
	WriteDebugLog(TEXT("LiminalRoomGenerator.cpp:202"), TEXT("GenerationStopped broadcast called"), FString::Printf(TEXT("{\"boundBefore\":%d}"), BoundBefore));
	// #endregion
}

void ALiminalRoomGenerator::ResetGrid()
{
	Grid.SetNum(GridSizeX * GridSizeY);

	for (FLiminalCell& C : Grid)
	{
		C.Type = ELiminalCellType::Empty;
	}

	// Place StartCell on the boundary to preserve the "space behind the start door" illusion.
	auto PickStartOnEdge = [&]() -> FIntPoint
		{
			// Avoid edges that would be invalid on tiny grids.
			const int32 MaxX = FMath::Max(0, GridSizeX - 1);
			const int32 MaxY = FMath::Max(0, GridSizeY - 1);

			// If the grid is too small, fall back safely.
			if (GridSizeX < 2 || GridSizeY < 2)
			{
				return FIntPoint(0, 0);
			}

			const int32 Edge = Rng.RandRange(0, 3); // 0=Left, 1=Right, 2=Bottom, 3=Top
			const int32 InnerMinX = (GridSizeX >= 3) ? 1 : 0;
			const int32 InnerMaxX = (GridSizeX >= 3) ? (GridSizeX - 2) : MaxX;
			const int32 InnerMinY = (GridSizeY >= 3) ? 1 : 0;
			const int32 InnerMaxY = (GridSizeY >= 3) ? (GridSizeY - 2) : MaxY;

			switch (Edge)
			{
			case 0: return FIntPoint(0, Rng.RandRange(InnerMinY, InnerMaxY));      // Left
			case 1: return FIntPoint(MaxX, Rng.RandRange(InnerMinY, InnerMaxY));   // Right
			case 2: return FIntPoint(Rng.RandRange(InnerMinX, InnerMaxX), 0);      // Bottom
			default:return FIntPoint(Rng.RandRange(InnerMinX, InnerMaxX), MaxY);   // Top
			}
		};

	StartCell = PickStartOnEdge();
	if (!InBounds(StartCell.X, StartCell.Y))
	{
		StartCell = FIntPoint(0, 0);
	}

	// Start must be on an outer edge and must face inward to the first path room.
	if (StartCell.X == 0) StartFacingDir = DirE;
	else if (StartCell.X == GridSizeX - 1) StartFacingDir = DirW;
	else if (StartCell.Y == 0) StartFacingDir = DirN;
	else if (StartCell.Y == GridSizeY - 1) StartFacingDir = DirS;
	else StartFacingDir = DirE;

	Cell(StartCell.X, StartCell.Y).Type = ELiminalCellType::Start;
	ExitTransitionCell = FIntPoint::ZeroValue;
	ExitCell = FIntPoint::ZeroValue;
}

TArray<FIntPoint> ALiminalRoomGenerator::GetCardinalNeighbors(const FIntPoint& P) const
{
	return { P + DirN, P + DirE, P + DirS, P + DirW };
}

bool ALiminalRoomGenerator::BuildNonOverlappingPath(TArray<FIntPoint>& OutPath)
{
	OutPath.Reset();

	const int32 LenMin = FMath::Max(1, PathLengthMin);
	const int32 LenMax = FMath::Max(LenMin, PathLengthMax);
	const int32 TargetLen = Rng.RandRange(LenMin, LenMax);

	// Start must be spawned first, and the first path room must connect in StartFacingDir.
	// Additionally, no rooms may spawn on the sides/behind the Start.
	TSet<FIntPoint> Visited;
	Visited.Add(StartCell);
	OutPath.Add(StartCell);

	const FIntPoint First = StartCell + StartFacingDir;
	if (!InBounds(First.X, First.Y))
	{
		return false;
	}

	// Reserve Start-adjacent cells that are not the forced first connection.
	for (const FIntPoint& N : GetCardinalNeighbors(StartCell))
	{
		if (!InBounds(N.X, N.Y)) continue;
		if (N == First) continue;
		Visited.Add(N);
	}

	Visited.Add(First);
	OutPath.Add(First);
	Cell(First.X, First.Y).Type = ELiminalCellType::Room;

	// Randomized backtracking random-walk continuing from the first room.
	while (OutPath.Num() < TargetLen)
	{
		const FIntPoint Current = OutPath.Last();
		TArray<FIntPoint> Options;

		for (const FIntPoint& N : GetCardinalNeighbors(Current))
		{
			if (!InBounds(N.X, N.Y)) continue;
			if (Visited.Contains(N)) continue;
			Options.Add(N);
		}

		if (Options.Num() == 0)
		{
			OutPath.Pop();
			if (OutPath.Num() <= 1) // keep Start and First
			{
				return false;
			}
			continue;
		}

		const int32 Pick = Rng.RandRange(0, Options.Num() - 1);
		const FIntPoint Next = Options[Pick];

		Visited.Add(Next);
		OutPath.Add(Next);
		Cell(Next.X, Next.Y).Type = ELiminalCellType::Room;
	}

	return true;
}


FIntPoint ALiminalRoomGenerator::PickFurthestRoomWorldSpace() const
{
	const FVector StartWorld = CellToWorld(StartCell.X, StartCell.Y, 0.f);

	float BestDistSq = -1.f;
	FIntPoint Best = StartCell;

	for (int32 Y = 0; Y < GridSizeY; ++Y)
	{
		for (int32 X = 0; X < GridSizeX; ++X)
		{
			if (Cell(X, Y).Type != ELiminalCellType::Room)
			{
				continue;
			}

			const FVector ThisWorld = CellToWorld(X, Y, 0.f);
			const float DistSq = FVector::DistSquared(StartWorld, ThisWorld);

			if (DistSq > BestDistSq)
			{
				BestDistSq = DistSq;
				Best = FIntPoint(X, Y);
			}
		}
	}

	return Best;
}

FIntPoint ALiminalRoomGenerator::PickAwayFromStartDir(const FIntPoint& From) const
{
	const FIntPoint Delta = From - StartCell;

	// Pick a cardinal direction that points away from Start.
	if (FMath::Abs(Delta.X) >= FMath::Abs(Delta.Y))
	{
		return (Delta.X >= 0) ? DirE : DirW;
	}
	return (Delta.Y >= 0) ? DirN : DirS;
}

bool ALiminalRoomGenerator::PlaceExitCells(const TArray<FIntPoint>& /*Path*/)
{
	// Pick the room that is furthest from Start in *world space*.
	const FIntPoint FurthestRoom = PickFurthestRoomWorldSpace();

	// Try to place the exit "outside" the furthest room, preferably in the direction
	// that continues away from the Start.
	const FIntPoint PreferredDir = PickAwayFromStartDir(FurthestRoom);

	auto IsEmptyCell = [&](const FIntPoint& P) -> bool
	{
		return InBounds(P.X, P.Y) && (Cell(P.X, P.Y).Type == ELiminalCellType::Empty);
	};

	auto TryDir = [&](const FIntPoint& Dir) -> bool
	{
		const FIntPoint ET = FurthestRoom + Dir; // Exit Lounge (transition)
		const FIntPoint EX = ET + Dir;          // Exit

		if (!IsEmptyCell(ET) || !IsEmptyCell(EX))
		{
			return false;
		}

		ExitTransitionCell = ET;
		ExitCell = EX;

		Cell(ExitTransitionCell.X, ExitTransitionCell.Y).Type = ELiminalCellType::ExitTransition;
		Cell(ExitCell.X, ExitCell.Y).Type = ELiminalCellType::Exit;

		return true;
	};

	// Priority: away-from-start direction first
	if (TryDir(PreferredDir))
	{
		return true;
	}

	// Fallback: try other cardinal directions.
	for (const FIntPoint& Dir : { DirN, DirE, DirS, DirW })
	{
		if (Dir == PreferredDir) continue;
		if (TryDir(Dir)) return true;
	}

	return false;
}

FVector ALiminalRoomGenerator::CellToWorld(int32 X, int32 Y, float Z) const
{
	const float Half = TileSize * 0.5f;
	const FVector CenterOffset = bCenterCells ? FVector(Half, Half, 0.f) : FVector::ZeroVector;
	const FVector Local = GridOriginLocal + CenterOffset + FVector(X * TileSize, Y * TileSize, Z);
	// Generation is intended to be pure and deterministic in WORLD space: location anchored to actor,
	// but rotation never influences placement.
	return GetActorLocation() + Local;
}


float ALiminalRoomGenerator::GetExitDirectionExtraYaw(const FIntPoint& Dir) const
{
	// Cardinal-only. If Dir is non-cardinal, return 0.
	if (Dir == FIntPoint(1, 0))  return ExitYawExtra_PosX;
	if (Dir == FIntPoint(-1, 0)) return ExitYawExtra_NegX;
	if (Dir == FIntPoint(0, 1))  return ExitYawExtra_PosY;
	if (Dir == FIntPoint(0, -1)) return ExitYawExtra_NegY;
	return 0.f;
}

ULevelStreamingDynamic* ALiminalRoomGenerator::SpawnLevelInstance(const TSoftObjectPtr<UWorld>& Level, const FVector& WorldLocation, const FRotator& WorldRotation, bool bBlockOnLoad)
{
	// #region agent log
	WriteDebugLog(TEXT("LiminalRoomGenerator.cpp:407"), TEXT("SpawnLevelInstance entry"), FString::Printf(TEXT("{\"levelPath\":\"%s\",\"worldLoc\":\"%s\",\"bBlockOnLoad\":%d}"), *Level.ToString(), *WorldLocation.ToString(), bBlockOnLoad ? 1 : 0));
	// #endregion

	if (Level.ToSoftObjectPath().IsNull())
	{
		return nullptr;
	}

	UWorld* World = GetWorld();
	if (!World) return nullptr;

	bool bSuccess = false;
	ULevelStreamingDynamic* Stream = ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(
		World,
		Level,
		WorldLocation,
		WorldRotation,
		bSuccess
	);

	if (!bSuccess || !Stream)
	{
		UE_LOG(LogTemp, Warning, TEXT("[LiminalRoomGen] Failed to load level instance: %s"), *Level.ToString());
		return nullptr;
	}

	Stream->bShouldBlockOnLoad = bBlockOnLoad;
	Stream->SetShouldBeLoaded(true);
	Stream->SetShouldBeVisible(true);

	// Track async streaming completion. If already loaded, do not increment.
	if (!Stream->GetLoadedLevel())
	{
		++PendingStreamLoads;
		Stream->OnLevelLoaded.AddDynamic(this, &ALiminalRoomGenerator::HandleOneStreamedLevelLoaded);
	}

	SpawnedPrefabs.Add(Stream);
	
	// #region agent log
	WriteDebugLog(TEXT("LiminalRoomGenerator.cpp:444"), TEXT("Before incrementing Debug_TotalSpawnedLevels"), FString::Printf(TEXT("{\"currentValue\":%d}"), Debug_TotalSpawnedLevels));
	// #endregion
	
	++Debug_TotalSpawnedLevels;
	
	// #region agent log
	WriteDebugLog(TEXT("LiminalRoomGenerator.cpp:446"), TEXT("After incrementing Debug_TotalSpawnedLevels"), FString::Printf(TEXT("{\"newValue\":%d}"), Debug_TotalSpawnedLevels));
	// #endregion
	
	return Stream;
}


void ALiminalRoomGenerator::SpawnPrefabs()
{
	const TSoftObjectPtr<UWorld> EffectiveRoom = RoomLevel;
	bool bFirstRoomSpawned = false;

	// #region agent log
	WriteDebugLog(TEXT("LiminalRoomGenerator.cpp:474"), TEXT("SpawnPrefabs entry"), TEXT("{}"));
	// #endregion

	auto ComputeRotationForCell = [&](ELiminalCellType CellType) -> FRotator
		{
			// PURE world rotation: actor rotation never influences spawned prefab yaw.
			if (!bRotateStartAndExitToPath)
			{
				return FRotator(0.f, TileYawOffset, 0.f);
			}

			switch (CellType)
			{
			case ELiminalCellType::Start:
			{
				const float Yaw =
					DirToYawDegrees(StartFacingDir, PrefabForwardAxis)
					+ TileYawOffset
					+ StartYawOffset;

				return FRotator(0.f, Yaw, 0.f);
			}

			case ELiminalCellType::ExitTransition:
			case ELiminalCellType::Exit:
			{
				const float Yaw =
					DirToYawDegrees(ExitFacingDir, PrefabForwardAxis)
					+ TileYawOffset
					+ ExitYawOffset
					+ GetExitDirectionExtraYaw(ExitFacingDir);

				return FRotator(0.f, Yaw, 0.f);
			}

			default:
				return FRotator(0.f, TileYawOffset, 0.f);
			}
		};

	auto SpawnCell = [&](int32 X, int32 Y, const TSoftObjectPtr<UWorld>& LevelToSpawn,
		float Z, const FVector& LocalOffset,
		const FRotator& Rot, bool bBlockOnLoad)
		{
			if (LevelToSpawn.ToSoftObjectPath().IsNull())
			{
				return;
			}

			const FVector RotatedOffsetLocal = FQuat(Rot).RotateVector(LocalOffset);
			const FVector WorldLoc = CellToWorld(X, Y, Z) + RotatedOffsetLocal;
			SpawnLevelInstance(LevelToSpawn, WorldLoc, Rot, bBlockOnLoad);
		};

	// ----- PASS 1 -----
	for (int32 Y = 0; Y < GridSizeY; ++Y)
	{
		for (int32 X = 0; X < GridSizeX; ++X)
		{
			const ELiminalCellType T = Cell(X, Y).Type;
			if (T == ELiminalCellType::Empty) continue;

			if (bSpawnExitTransitionThenExit &&
				(T == ELiminalCellType::ExitTransition || T == ELiminalCellType::Exit))
			{
				continue;
			}

			TSoftObjectPtr<UWorld> Pick = EffectiveRoom;

			if (T == ELiminalCellType::Start && !StartLevel.ToSoftObjectPath().IsNull())
			{
				Pick = StartLevel;
			}
			else if (T == ELiminalCellType::ExitTransition && !ExitTransitionLevel.ToSoftObjectPath().IsNull())
			{
				Pick = ExitTransitionLevel;
			}
			else if (T == ELiminalCellType::Exit && !ExitLevel.ToSoftObjectPath().IsNull())
			{
				Pick = ExitLevel;
			}

			const FRotator Rot = ComputeRotationForCell(T);
			SpawnCell(X, Y, Pick, FloorZ, TilePrefabOffsetLocal, Rot, false);

			// Broadcast first room spawned event (only once, on first non-empty cell)
			if (!bFirstRoomSpawned)
			{
				bFirstRoomSpawned = true;
				
				// #region agent log
				LogDelegateState(TEXT("LiminalRoomGenerator.cpp:608"), TEXT("FirstRoomSpawned"), FirstRoomSpawned);
				// #endregion
				
				const int32 BoundBefore = FirstRoomSpawned.GetAllObjects().Num();
				const bool bFirstRoomIsBound = FirstRoomSpawned.IsBound();
				UE_LOG(LogTemp, Warning, TEXT("[LiminalRoomGen] Broadcasting FirstRoomSpawned - Bound count: %d, IsBound: %d, Instance: %s"), BoundBefore, bFirstRoomIsBound ? 1 : 0, *GetName());
				FirstRoomSpawned.Broadcast();

				// #region agent log
				WriteDebugLog(TEXT("LiminalRoomGenerator.cpp:612"), TEXT("FirstRoomSpawned broadcast called"), FString::Printf(TEXT("{\"cellType\":%d,\"x\":%d,\"y\":%d,\"boundBefore\":%d}"), (int32)T, X, Y, BoundBefore));
				// #endregion
			}

			if (bSpawnCeilings &&
				T == ELiminalCellType::Room &&
				!CeilingLevel.ToSoftObjectPath().IsNull())
			{
				SpawnCell(X, Y, CeilingLevel, CeilingZ, CeilingPrefabOffsetLocal, Rot, false);
			}
		}
	}

	// ----- PASS 2 -----
	if (bSpawnExitTransitionThenExit)
	{
		const FRotator ExitRot = ComputeRotationForCell(ELiminalCellType::ExitTransition);

		if (!ExitTransitionLevel.ToSoftObjectPath().IsNull())
		{
			SpawnCell(
				ExitTransitionCell.X,
				ExitTransitionCell.Y,
				ExitTransitionLevel,
				FloorZ,
				TilePrefabOffsetLocal,
				ExitRot,
				bBlockOnLoadExitTransition
			);

			if (bFlushStreamingBetweenExitTransitionAndExit)
			{
				if (UWorld* World = GetWorld())
				{
					World->FlushLevelStreaming(EFlushLevelStreamingType::Full);
				}
			}
		}

		if (!ExitLevel.ToSoftObjectPath().IsNull())
		{
			SpawnCell(
				ExitCell.X,
				ExitCell.Y,
				ExitLevel,
				FloorZ,
				TilePrefabOffsetLocal,
				ExitRot,
				false
			);
		}
	}

	// ----- GENERATION COMPLETE (DEFERRED) -----
	if (PendingStreamLoads == 0 && !bGenerationCompleteBroadcasted)
	{
		bGenerationCompleteBroadcasted = true;

		if (UWorld* World = GetWorld())
		{
			World->GetTimerManager().SetTimerForNextTick([this]()
				{
					GenerationComplete.Broadcast(StartLevel);
				});
		}
	}
}



void ALiminalRoomGenerator::SpawnWalls()
{
	if (WallLevel.ToSoftObjectPath().IsNull())
	{
		return;
	}

	const float Half = TileSize * 0.5f;

	auto SpawnWall = [&](int32 X, int32 Y, const FVector& EdgeOffsetLocal, float YawDelta)
	{
		const float HalfLocal = TileSize * 0.5f;
		const FVector CenterOffset = bCenterCells ? FVector(HalfLocal, HalfLocal, 0.f) : FVector::ZeroVector;
		const FVector RotOffset = FRotator(0.f, YawDelta, 0.f).RotateVector(WallPrefabOffsetLocal);
		const FVector Local = GridOriginLocal + CenterOffset + FVector(X * TileSize, Y * TileSize, 0.f) + EdgeOffsetLocal + FVector(0, 0, WallZ) + RotOffset;
		const FVector WorldLoc = GetActorLocation() + Local;
		const FRotator WorldRot = FRotator(0.f, YawDelta, 0.f);
		SpawnLevelInstance(WallLevel, WorldLoc, WorldRot, false);
	};

	for (int32 Y = 0; Y < GridSizeY; ++Y)
	{
		for (int32 X = 0; X < GridSizeX; ++X)
		{
			const ELiminalCellType T = Cell(X, Y).Type;
			if (T != ELiminalCellType::Room) continue; // no walls around Start/ExitTransition/Exit

			// North (+Y)
			if (!InBounds(X, Y + 1) || Cell(X, Y + 1).Type == ELiminalCellType::Empty)
			{
				SpawnWall(X, Y, FVector(0, +Half, 0), 0.f);
			}

			// South (-Y)
			if (!InBounds(X, Y - 1) || Cell(X, Y - 1).Type == ELiminalCellType::Empty)
			{
				SpawnWall(X, Y, FVector(0, -Half, 0), 180.f);
			}

			// East (+X)
			if (!InBounds(X + 1, Y) || Cell(X + 1, Y).Type == ELiminalCellType::Empty)
			{
				SpawnWall(X, Y, FVector(+Half, 0, 0), 90.f);
			}

			// West (-X)
			if (!InBounds(X - 1, Y) || Cell(X - 1, Y).Type == ELiminalCellType::Empty)
			{
				SpawnWall(X, Y, FVector(-Half, 0, 0), -90.f);
			}

		}
	}
}

void ALiminalRoomGenerator::HandleOneStreamedLevelLoaded()
{
	PendingStreamLoads = FMath::Max(0, PendingStreamLoads - 1);

	// #region agent log
	WriteDebugLog(TEXT("LiminalRoomGenerator.cpp:682"), TEXT("HandleOneStreamedLevelLoaded"), FString::Printf(TEXT("{\"PendingStreamLoads\":%d}"), PendingStreamLoads));
	// #endregion

	if (PendingStreamLoads == 0 && !bGenerationCompleteBroadcasted)
	{
		bGenerationCompleteBroadcasted = true;
		
		// #region agent log
		LogDelegateState(TEXT("LiminalRoomGenerator.cpp:735"), TEXT("GenerationComplete"), GenerationComplete);
		// #endregion
		
		const int32 BoundBefore = GenerationComplete.GetAllObjects().Num();
		const bool bGenCompleteAsyncIsBound = GenerationComplete.IsBound();
		UE_LOG(LogTemp, Warning, TEXT("[LiminalRoomGen] Broadcasting GenerationComplete (async) - Bound count: %d, IsBound: %d, Instance: %s"), BoundBefore, bGenCompleteAsyncIsBound ? 1 : 0, *GetName());
		GenerationComplete.Broadcast(StartLevel);

		// #region agent log
		WriteDebugLog(TEXT("LiminalRoomGenerator.cpp:740"), TEXT("GenerationComplete broadcast called (async)"), FString::Printf(TEXT("{\"PendingStreamLoads\":%d,\"boundBefore\":%d}"), PendingStreamLoads, BoundBefore));
		// #endregion
	}
}

void ALiminalRoomGenerator::TestDelegateSystem(const FString& TestMessage)
{
	UE_LOG(LogTemp, Warning, TEXT("[LiminalRoomGen] TestDelegateSystem called with message: %s, Instance: %s"), *TestMessage, *GetName());
	
	const int32 BoundCount = TestDelegate.GetAllObjects().Num();
	UE_LOG(LogTemp, Warning, TEXT("[LiminalRoomGen] TestDelegate bound count: %d"), BoundCount);
	
	// #region agent log
	LogDelegateState(TEXT("LiminalRoomGenerator.cpp:TestDelegateSystem"), TEXT("TestDelegate"), TestDelegate);
	WriteDebugLog(TEXT("LiminalRoomGenerator.cpp:TestDelegateSystem"), TEXT("TestDelegateSystem called"), FString::Printf(TEXT("{\"message\":\"%s\",\"boundCount\":%d}"), *TestMessage, BoundCount));
	// #endregion
	
	TestDelegate.Broadcast(TestMessage);
	
	UE_LOG(LogTemp, Warning, TEXT("[LiminalRoomGen] TestDelegate.Broadcast() completed"));
}
