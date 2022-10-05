// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HelloSphere.generated.h" //<- 마지막에 추가해야함(규칙)

UCLASS() //<- 클래스를 만들겠다 (규칙)
class UNREALCPP_API AHelloSphere : public AActor //<- API를 쓰겠다(규칙)
{
	GENERATED_BODY() //<- 언리얼 클래스를 만들때 생성자(규칙)
	
public:	
	// Sets default values for this actor's properties
	AHelloSphere(); // <- 실제 생성자

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	class UTextRenderComponent* TextRenderComponent;

	UFUNCTION()
	void MyOnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

	UFUNCTION()
	void MyOnEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
};
