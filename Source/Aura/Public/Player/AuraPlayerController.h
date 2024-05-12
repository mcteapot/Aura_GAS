// Copyright Archie

#pragma once


// Includes
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AuraPlayerController.generated.h"

// Forward declarations
class UInputMappingContext;


/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AAuraPlayerController();

protected:
	virtual void BeginPlay() override;

private:
	TObjectPtr<UInputMappingContext> AuraContext;

};
