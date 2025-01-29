// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "InventoryItem.generated.h"

UENUM(BlueprintType)
enum class ItemType : uint8
{
	Value1 UMETA(DisplayName = "Consumable"),
	Value2 UMETA(DisplayName = "Bullet"),
	Value3 UMETA(DisplayName = "QuestItem"),
};


USTRUCT(BlueprintType)
struct FItem {

	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ItemType itemType = ItemType::Value1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data");
	int32 health=100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data");
	float speed=10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data");
	FString name="Zopa";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AStaticMeshActor* connected3dObject = nullptr;

	FItem() :
		health(100), speed(600.0f), name(TEXT("Default"))
	{
	}

};
