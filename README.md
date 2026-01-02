# Liminal Room Generator (Plugin)

This plugin provides a single placeable Actor class:

- **ALiminalRoomGenerator** (C++ class, placeable from the *All Classes* panel)

It generates:
- Start room (type `1`)
- Non-overlapping path of rooms (type `1`)
- Exit transition buffer room (type `2`)
- Exit room (type `3`)
- Outer walls around any room edge that has no adjacent room
- Ceilings over all generated rooms

## Install

1. Copy `Plugins/LiminalRoomGen` into your project's `Plugins/` folder.
2. Open the project and let it compile.

## Use

1. Drag **LiminalRoomGenerator** into your level (search for `LiminalRoomGenerator` in the Place Actors panel).
2. In Details, assign your **prefab levels** (small .umap chunks) in **Liminal|Prefabs**:
   - RoomLevel (type 1)
   - StartLevel (optional override for the start tile)
   - ExitTransitionLevel (type 2 override)
   - ExitLevel (type 3 override)
   - WallLevel (one wall segment)
   - CeilingLevel (one ceiling segment)
3. Set `TileSize` to match your grid spacing (e.g. 1000) and adjust the Z offsets if needed:
   - FloorZ, CeilingZ, WallZ
4. Click **Generate** (editor button).

> If your prefabs already include their own vertical placement, you can leave FloorZ/CeilingZ/WallZ at 0.

## Notes

- Prefabs are spawned as **streaming level instances** (ULevelStreamingDynamic) so you can author complex room chunks as mini-maps.
- Exit placement follows your examples: the ExitTransition cell is adjacent to the final path cell, and the Exit cell is adjacent to the ExitTransition in the same direction.
