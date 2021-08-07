// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Matematica.generated.h"


 UENUM(BlueprintType, Category = "TipoDeCuenta")
 enum class TipoDeCuenta : uint8
 {
	SUMA             UMETA(DisplayName = "SUMA"),
	RESTA            UMETA(DisplayName = "RESTA"),
	MULTIPLICACION   UMETA(DisplayName = "MULTIPLICACION"),
	DIVISION         UMETA(DisplayName = "DIVISION")
 };
 
//  enum class Suit { Diamonds, Hearts, Clubs, Spades };

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class JUEGOMATEMATICA_API UMatematica : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMatematica();
	
	// enum class TipoDeCuenta 
	// {
	// 	SUMA,
	// 	RESTA,
	// 	MULTIPLICACION,
	// 	DIVISION
	// };
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UFUNCTION(BlueprintCallable, Category="OperadoresMatematicos")
	void GenerarExpresion(int exponente, TipoDeCuenta tipoDecuentaParametro);
	UFUNCTION(BlueprintCallable, Category="OperadoresMatematicos")
	int ObtenerResultado();	

public:
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="OperadoresMatematicos")
	int numeroIzquierdo;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category="OperadoresMatematicos")
	int numeroDerecho;


private:
	UPROPERTY(VisibleAnywhere)
	int rangoMinimo;
	UPROPERTY(VisibleAnywhere)
	int rangoMaximo;

	TipoDeCuenta operadorTipoDeCuenta;

};
