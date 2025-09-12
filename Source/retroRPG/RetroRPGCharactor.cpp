// Fill out your copyright notice in the Description page of Project Settings.


#include "RetroRPGCharactor.h"

// Sets default values
ARetroRPGCharactor::ARetroRPGCharactor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComponent");
	Attributes = CreateDefaultSubobject<URetroRPGAttributeSet>("Attributes");

}

// Called when the game starts or when spawned
void ARetroRPGCharactor::BeginPlay()
{
	Super::BeginPlay();

	if(AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this,this);
		
		if(DefaultAttributeEffect)
		{
			FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
			EffectContext.AddSourceObject(this);
			FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(DefaultAttributeEffect, 1, EffectContext);

			if(SpecHandle.IsValid())
			{
				FActiveGameplayEffectHandle GEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
			}
		}

		if(HasAuthority())
		{
			for (TSubclassOf<UGameplayAbility>& StartupAbility : DefaultAbilities)
			{
				AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(StartupAbility.GetDefaultObject(),1,0));
			}
		}
	}	
}

UAbilitySystemComponent* ARetroRPGCharactor::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent; // 아직 별도 AbilitySystemComponent가 없다면 기본값으로 nullptr 반환
}