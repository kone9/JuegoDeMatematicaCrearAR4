// Fill out your copyright notice in the Description page of Project Settings.


#include "Matematica.h"

// Sets default values for this component's properties
UMatematica::UMatematica()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMatematica::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMatematica::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	
}

void UMatematica::GenerarExpresion(int exponente, TipoDeCuenta tipoDecuentaParametro)
{
	if(exponente == 0)
	{
		return;
	}

	if(exponente == 1)
	{
		rangoMinimo = 1;
		rangoMaximo = 9;
	}
	else
	{
		rangoMinimo = FMath::Pow(10,exponente - 1);
		rangoMaximo = FMath::Pow(10,exponente) - 1;
		
	}

	numeroIzquierdo = FMath::RandRange(rangoMinimo,rangoMaximo);
	numeroDerecho = FMath::RandRange(rangoMinimo,rangoMaximo);

	operadorTipoDeCuenta = tipoDecuentaParametro;
	
}

int UMatematica::ObtenerResultado()
{
	switch (operadorTipoDeCuenta)
	{
		case TipoDeCuenta::SUMA:
			return numeroIzquierdo + numeroDerecho;
		
		case TipoDeCuenta::RESTA:
			return numeroIzquierdo - numeroDerecho;
		
		case TipoDeCuenta::MULTIPLICACION:
			return numeroIzquierdo * numeroDerecho;
		
		case TipoDeCuenta::DIVISION:
			return numeroIzquierdo / numeroDerecho;
	}
	return 0;
}

