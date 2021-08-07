// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Matematica.generated.h"


//  UENUM(BlueprintType, Category = "TipoDeCuenta")
//  enum class TipoDeCuenta : uint8
//  {
// 	SUMA             UMETA(DisplayName = "SUMA"),
// 	RESTA            UMETA(DisplayName = "RESTA"),
// 	MULTIPLICACION   UMETA(DisplayName = "MULTIPLICACION"),
// 	DIVISION         UMETA(DisplayName = "DIVISION")
//  }


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class JUEGOMATEMATICA_API UMatematica : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMatematica();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY(VisibleAnywhere)
	int numeroIzquierdo;
	UPROPERTY(VisibleAnywhere)
	int numeroDerecho;

private:
	UPROPERTY(VisibleAnywhere)
	int numeroMinimo;
	UPROPERTY(VisibleAnywhere)
	int numeroMaximo;

	// TipoDeCuenta operador;

	// void GenerarExpresion(int exponente, TipoDeCuenta tipoDecuentaParametro):
		
};
