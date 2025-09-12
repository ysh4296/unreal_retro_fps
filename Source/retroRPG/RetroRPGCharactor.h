// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameplayTagContainer.h"
#include "GamePlayEffectTypes.h"
#include "AbilitySystemComponent.h" 
#include "AbilitySystemInterface.h"
#include "RetroRPGAttributeSet.h"
#include "RetroRPGCharactor.generated.h"

UCLASS()
class RETRORPG_API ARetroRPGCharactor : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Abilities, meta = (AllowPrivateAccess = "true"))
		class UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
		class URetroRPGAttributeSet* Attributes;
	
public:	
	// Sets default values for this actor's properties
	ARetroRPGCharactor();
	UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Effect that initializes our default attributes
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RetroRPG")
		TSubclassOf<class UGameplayEffect> DefaultAttributeEffect;

	// Array of starting abilities
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RetroRPG")
		TArray<TSubclassOf<class UGameplayAbility>> DefaultAbilities;

};
