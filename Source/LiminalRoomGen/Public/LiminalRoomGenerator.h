#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/LevelStreamingDynamic.h"
#include "LiminalRoomGenerator.generated.h"

UENUM(BlueprintType)
enum class ELiminalCellType : uint8
{
	Empty			UMETA(DisplayName="Empty"),
	Start			UMETA(DisplayName="Start"),
	Room			UMETA(DisplayName="Room"),
	ExitTransition	UMETA(DisplayName="Exit Transition"),
	Exit			UMETA(DisplayName="Exit")
};


UENUM(BlueprintType)
enum class ELiminalPrefabForwardAxis : uint8
{
	ForwardX UMETA(DisplayName = "Prefab faces +X"),
	ForwardY UMETA(DisplayName = "Prefab faces +Y")
};

USTRUCT(BlueprintType)
struct FLiminalCell
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ELiminalCellType Type = ELiminalCellType::Empty;
};

// Fired when all spawned Level Instances for a generation have finished loading.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLiminalGenerationComplete, TSoftObjectPtr<UWorld>, StartLevel);

// Fired when generation starts.
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLiminalGenerationStarted);

// Fired when the first room is spawned.
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLiminalFirstRoomSpawned);

// Fired when generation stops (cleared).
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLiminalGenerationStopped);

// Simple test delegate to verify delegate system works
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLiminalTestDelegate, FString, TestMessage);

UCLASS(BlueprintType)
class LIMINALROOMGEN_API ALiminalRoomGenerator : public AActor
{
	GENERATED_BODY()

public:
	ALiminalRoomGenerator();

	/** If true, Start / ExitTransition / Exit rotate to face their connection direction. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Liminal|Rotation")
	bool bRotateStartAndExitToPath = true;

	/** Which axis your prefab considers "forward" when yaw is 0. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Liminal|Rotation")
	ELiminalPrefabForwardAxis PrefabForwardAxis = ELiminalPrefabForwardAxis::ForwardX;

	/** Global yaw offset applied to ALL spawned prefabs (use to correct prefab authoring). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Liminal|Rotation")
	float TileYawOffset = 0.f;

	/** Extra yaw offset applied only to the Start prefab. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Liminal|Rotation")
	float StartYawOffset = 0.f;

	/** Extra yaw offset applied only to the ExitTransition and Exit prefabs. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Liminal|Rotation")
	float ExitYawOffset = 0.f;


	/** Additional yaw tweak based on the exit spawn direction (cardinal). Useful for prefab authoring quirks. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Liminal|Rotation")
	float ExitYawExtra_PosX = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Liminal|Rotation")
	float ExitYawExtra_NegX = -90.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Liminal|Rotation")
	float ExitYawExtra_PosY = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Liminal|Rotation")
	float ExitYawExtra_NegY = -90.f;

	// --- Generation Controls ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation", meta=(ClampMin="3", UIMin="3"))
	int32 GridSizeX = 25;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation", meta=(ClampMin="3", UIMin="3"))
	int32 GridSizeY = 25;

	/** Size of one room tile in Unreal units (X/Y). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation", meta=(ClampMin="100.0", UIMin="100.0"))
	float TileSize = 1000.0f;

	/** Path length will be randomly selected between Min and Max. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation", meta=(ClampMin="1", UIMin="1"))
	int32 PathLengthMin = 20;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation", meta=(ClampMin="1", UIMin="1"))
	int32 PathLengthMax = 60;

	/** If true, Seed is ignored and a random seed is used each generation. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation")
	bool bUseRandomSeed = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation", meta=(EditCondition="!bUseRandomSeed"))
	int32 Seed = 1337;

	/** If true, Generate() is called on BeginPlay (runtime). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation")
	bool bGenerateOnBeginPlay = false;

	/** Origin offset in local space for the grid (0,0) cell. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation")
	FVector GridOriginLocal = FVector::ZeroVector;

	/**
	 * If true, each grid cell position is treated as the CENTER of the tile.
	 * This matches the most common prefab authoring pattern (tile centered at (0,0) in the prefab level).
	 * If your prefab levels are authored with the tile's corner at (0,0), set this to false.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation")
	bool bCenterCells = true;

	/** Additional local-space offset applied to every spawned tile (room/start/exit) level instance. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation")
	FVector TilePrefabOffsetLocal = FVector::ZeroVector;

	/** Additional local-space offset applied to every spawned ceiling level instance. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation")
	FVector CeilingPrefabOffsetLocal = FVector::ZeroVector;

	/** Additional local-space offset applied to every spawned wall level instance. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation")
	FVector WallPrefabOffsetLocal = FVector::ZeroVector;

	/** If true, we flush level streaming after generation. This can stall the editor for large layouts. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation")
	bool bFlushStreamingAfterGenerate = false;
	/** Ensures ExitTransition (lounge) is spawned/loaded before spawning Exit. Useful if your exit prefabs self-resolve based on adjacency. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation")
	bool bSpawnExitTransitionThenExit = true;

	/** If true, ExitTransition will block on load (editor-safe). Avoids race where Exit loads first. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation")
	bool bBlockOnLoadExitTransition = true;

	/** If true, flush streaming after ExitTransition loads and before spawning Exit. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Generation")
	bool bFlushStreamingBetweenExitTransitionAndExit = true;


	// --- Geometry / Layout ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Geometry", meta=(ClampMin="50.0", UIMin="50.0"))
	float CeilingHeight = 300.0f;

	/** If your wall mesh pivot is centered, WallMidZ should be about half wall height (often CeilingHeight*0.5). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Geometry")
	float WallMidZ = 150.0f;

	/** Z offsets for spawned prefabs (in UU). If your prefabs already include height, you can leave these at 0. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Geometry")
	float FloorZ = 75.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Geometry")
	float CeilingZ = -154.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Geometry")
	float WallZ = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Geometry")
	bool bSpawnCeilings = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Geometry")
	bool bSpawnWalls = true;

	// --- Prefab Level References (recommended) ---
	/** Prefab level for a normal room tile (type 1). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Prefabs")
	TSoftObjectPtr<UWorld> RoomLevel;

	/** Prefab level for the starting tile (still a type 1, but special). If unset, RoomLevel is used. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Prefabs")
	TSoftObjectPtr<UWorld> StartLevel;

	/** Prefab level for the exit transition tile (type 2). If unset, RoomLevel is used. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Prefabs")
	TSoftObjectPtr<UWorld> ExitTransitionLevel;

	/** Prefab level for the exit tile (type 3). If unset, RoomLevel is used. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Prefabs")
	TSoftObjectPtr<UWorld> ExitLevel;

	/** Prefab level for a single wall segment (placed on open edges). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Prefabs")
	TSoftObjectPtr<UWorld> WallLevel;

	/** Prefab level for a ceiling segment (placed above each generated tile). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Liminal|Prefabs")
	TSoftObjectPtr<UWorld> CeilingLevel;

	// --- Editor Buttons ---
	UFUNCTION(CallInEditor, Category="Liminal|Generation")
	void Generate();

	UFUNCTION(CallInEditor, Category="Liminal|Generation")
	void ClearGeneration();

	// --- Runtime API ---
	UFUNCTION(BlueprintCallable, Category="Liminal|Generation")
	void GenerateRuntime(bool bClearFirst = true);

	UFUNCTION(BlueprintCallable, Category="Liminal|Generation")
	void ClearRuntime();

	/** Broadcast when generation starts. */
	UPROPERTY(BlueprintAssignable, Category="Liminal|Generation")
	FLiminalGenerationStarted GenerationStarted;

	/** Broadcast when the first room is spawned. */
	UPROPERTY(BlueprintAssignable, Category="Liminal|Generation")
	FLiminalFirstRoomSpawned FirstRoomSpawned;

	/** Broadcast when generation stops (cleared). */
	UPROPERTY(BlueprintAssignable, Category="Liminal|Generation")
	FLiminalGenerationStopped GenerationStopped;

	/** Broadcast after all spawned Level Instances for the most recent GenerateRuntime() call are loaded & visible. */
	UPROPERTY(BlueprintAssignable, Category="Liminal|Generation")
	FLiminalGenerationComplete GenerationComplete;

	/** TEST: Simple test delegate to verify delegate system works. */
	UPROPERTY(BlueprintAssignable, Category="Liminal|Debug")
	FLiminalTestDelegate TestDelegate;

	/** TEST: Call this from Blueprint to test if delegates work. */
	UFUNCTION(BlueprintCallable, Category="Liminal|Debug")
	void TestDelegateSystem(const FString& TestMessage);

	// --- Debug ---
	UPROPERTY(Transient)
	int32 Debug_TotalSpawnedLevels = 0;

	UPROPERTY(Transient)
	int32 Debug_LoadedLevels = 0;

	UPROPERTY(Transient)
	bool bDebugLogStreamingStatus = true;

	/** Returns the start cell (grid coordinates). */
	UFUNCTION(BlueprintPure, Category="Liminal|Query")
	FIntPoint GetStartCell() const { return StartCell; }

	/** Returns the exit cell (grid coordinates). */
	UFUNCTION(BlueprintPure, Category="Liminal|Query")
	FIntPoint GetExitCell() const { return ExitCell; }

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	virtual bool ShouldTickIfViewportsOnly() const override;

private:
	// Editor-safe deferred generate/clear (LevelInstanceSubsystem is not safe to mutate directly from Details panel click).
	UPROPERTY(Transient)
	bool bPendingEditorGenerate = false;

	UPROPERTY(Transient)
	bool bPendingEditorClear = false;

	float GetExitDirectionExtraYaw(const FIntPoint& Dir) const;
	// Spawned streaming levels (prefab instances)
	UPROPERTY(Transient)
	TArray<TObjectPtr<ULevelStreamingDynamic>> SpawnedPrefabs;

	// Grid data
	UPROPERTY(VisibleAnywhere, Category="Liminal|Debug")
	TArray<FLiminalCell> Grid;

	UPROPERTY(VisibleAnywhere, Category="Liminal|Debug")
	FIntPoint StartCell = FIntPoint::ZeroValue;

	UPROPERTY(VisibleAnywhere, Category="Liminal|Debug")
	FIntPoint ExitTransitionCell = FIntPoint::ZeroValue;

	UPROPERTY(VisibleAnywhere, Category="Liminal|Debug")
	FIntPoint ExitCell = FIntPoint::ZeroValue;

	// Facing directions (grid) computed during generation for rotation.
	UPROPERTY(Transient)
	FIntPoint StartFacingDir = FIntPoint(1,0);

	UPROPERTY(Transient)
	FIntPoint ExitFacingDir = FIntPoint(1,0);

	// --- Streaming completion tracking ---
	UPROPERTY(Transient)
	int32 PendingStreamLoads = 0;

	UPROPERTY(Transient)
	bool bGenerationCompleteBroadcasted = false;

	UFUNCTION()
	void HandleOneStreamedLevelLoaded();


	FRandomStream Rng;

	int32 Idx(int32 X, int32 Y) const { return Y * GridSizeX + X; }
	bool InBounds(int32 X, int32 Y) const { return X >= 0 && Y >= 0 && X < GridSizeX && Y < GridSizeY; }
	FLiminalCell& Cell(int32 X, int32 Y) { return Grid[Idx(X,Y)]; }
	const FLiminalCell& Cell(int32 X, int32 Y) const { return Grid[Idx(X,Y)]; }

	void ResetGrid();
	bool BuildNonOverlappingPath(TArray<FIntPoint>& OutPath);
	bool PlaceExitCells(const TArray<FIntPoint>& Path);
	void SpawnPrefabs();
	void SpawnWalls();
	FVector CellToWorld(int32 X, int32 Y, float Z = 0.f) const;
	ULevelStreamingDynamic* SpawnLevelInstance(const TSoftObjectPtr<UWorld>& Level, const FVector& WorldLocation, const FRotator& WorldRotation, bool bBlockOnLoad = false);

	FIntPoint PickFurthestRoomWorldSpace() const;
	FIntPoint PickAwayFromStartDir(const FIntPoint& From) const;

	TArray<FIntPoint> GetCardinalNeighbors(const FIntPoint& P) const;
};