// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Tasks/DebugPrintTask.h"

UDebugPrintTask::UDebugPrintTask()
{
}

EBTNodeResult::Type UDebugPrintTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	GEngine->AddOnScreenDebugMessage(444,1.0f,FColor::Magenta,DebugMessage);
	return EBTNodeResult::Succeeded;
}
