// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <InventoryItem.h>
#include "Inventory.h"
#include "MyCharacter.generated.h"

UCLASS()
class LEARNING_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCharacter();
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "Item")
	//TArray<InventoryItem*> items;
	

protected:
	// Called when the game starts or when spawned
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UInventory* inventory;
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
