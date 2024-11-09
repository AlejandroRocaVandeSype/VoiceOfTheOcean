// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/EQGenerators/EQG_3DGrid.h"

void UEQG_3DGrid::GenerateItems(FEnvQueryInstance& QueryInstance) const
{
	UObject* BindOwner = QueryInstance.Owner.Get();
	GridSize.BindData(BindOwner, QueryInstance.QueryID);
	SpaceBetween.BindData(BindOwner, QueryInstance.QueryID);

	float RadiusValue = GridSize.GetValue();
	float DensityValue = SpaceBetween.GetValue();

	const int32 ItemCount = FPlatformMath::TruncToInt((RadiusValue * 2.0f / DensityValue) + 1);
	const int32 ItemCountHalf = ItemCount / 2;

	TArray<FVector> ContextLocations;
	QueryInstance.PrepareContext(GenerateAround, ContextLocations);

	TArray<FNavLocation> GridPoints;
	GridPoints.Reserve(ItemCount * ItemCount * ContextLocations.Num());

	for (int32 ContextIndex = 0; ContextIndex < ContextLocations.Num(); ContextIndex++)
	{
		for (int32 IndexX = 0; IndexX < ItemCount; ++IndexX)
		{
			for (int32 IndexY = 0; IndexY < ItemCount; ++IndexY)
			{
				for (int32 IndexZ = 0; IndexZ < ItemCount; ++IndexZ)
				{
					const FNavLocation TestPoint = FNavLocation(
						ContextLocations[ContextIndex] - FVector(
							DensityValue * (IndexX - ItemCountHalf),
							DensityValue * (IndexY - ItemCountHalf),
							DensityValue * (IndexZ - ItemCountHalf) 
						)
					);
					GridPoints.Add(TestPoint);
				}
			}
		}
	}

	ProjectAndFilterNavPoints(GridPoints, QueryInstance);
	StoreNavPoints(GridPoints, QueryInstance);
}