//$ Copyright 2015 Ali Akbar, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//


#pragma once
#include "Core/DungeonBuilder.h"
#include "FloorPlanModel.h"
#include "FloorPlanBuilder.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(FloorPlanBuilderLog, Log, All);
class ADungeon;
class ADungeonVolume;
class UFloorPlanConfig;

/**
*
*/
UCLASS()
class DUNGEONARCHITECTRUNTIME_API UFloorPlanBuilder : public UDungeonBuilder
{
	GENERATED_BODY()

public:
	virtual void BuildDungeonImpl(UWorld* World) override;
	virtual void EmitDungeonMarkers_Implementation() override;
	virtual void DrawDebugData(UWorld* InWorld, bool bPersistant = false, float lifeTime = 0) override;
	virtual bool SupportsBackgroundTask() const override { return false; }
	virtual TSubclassOf<UDungeonModel> GetModelClass() override;
	virtual TSubclassOf<UDungeonConfig> GetConfigClass() override;
	virtual TSubclassOf<UDungeonToolData> GetToolDataClass() override;
	virtual bool ProcessSpatialConstraint(UDungeonSpatialConstraint* SpatialConstraint, const FTransform& Transform, FQuat& OutRotationOffset) override;
	virtual void GetDefaultMarkerNames(TArray<FString>& OutMarkerNames) override;

protected:
	virtual bool PerformSelectionLogic(const TArray<UDungeonSelectorLogic*>& SelectionLogics, const FPropSocket& socket) override;
	virtual FTransform PerformTransformLogic(const TArray<UDungeonTransformLogic*>& TransformLogics, const FPropSocket& socket) override;

private:
	void BuildLayout();
	void SplitChunk(FloorChunkPtr Chunk, FloorChunkPtr OutLeft, FloorChunkPtr OutRight, FloorChunkPtr OutHallway);
	void SplitChunk(FloorChunkPtr Chunk, FloorChunkPtr OutLeft, FloorChunkPtr OutRight);
	void EmitMarkerAt(const FVector& WorldLocation, const FString& MarkerName, const FQuat& Rotation);
	void EmitMarkerAt(const FVector& WorldLocation, const FString& MarkerName, float Angle);
	bool VolumeEncompassesPoint(ADungeonVolume* Volume, const FIntVector& GridPoint);
	void GetVolumeCells(ADungeonVolume* Volume, int32 z, TArray<FIntVector>& OutCells);
	void CreateDoors(int z);

private:
	UFloorPlanModel* floorPlanModel;
	UFloorPlanConfig* floorPlanConfig;
	FloorChunkDBPtr ChunkDB;
	FloorDoorManager DoorManager;
	FRandomStream Random;

	TSet<FloorChunkId> Visited;
};

