// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyMathLibrary.generated.h"

/**
 * 
 */
UCLASS()
class XELNAMATH_API UMyMathLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Math")
	static float MathTest(float T, float Height);
};
