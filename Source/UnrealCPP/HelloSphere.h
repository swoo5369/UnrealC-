// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HelloSphere.generated.h" //<- �������� �߰��ؾ���(��Ģ)

UCLASS() //<- Ŭ������ ����ڴ� (��Ģ)
class UNREALCPP_API AHelloSphere : public AActor //<- API�� ���ڴ�(��Ģ)
{
	GENERATED_BODY() //<- �𸮾� Ŭ������ ���鶧 ������(��Ģ)
	
public:	
	// Sets default values for this actor's properties
	AHelloSphere(); // <- ���� ������

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
