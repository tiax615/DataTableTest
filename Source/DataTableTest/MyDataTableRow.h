// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//
// #include "CoreMinimal.h"
//
// /**
//  * 
//  */
// class DATATABLETEST_API MyDataTableRow
// {
// public:
// 	MyDataTableRow();
// 	~MyDataTableRow();
// };

#include "Engine/DataTable.h"
#include "MyDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FTableRowGameObject : public FTableRowBase
{
	GENERATED_BODY()
	
public:
	FTableRowGameObject(){}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, DisplayName="中文名", Category="TableRowGameObject")
	FString NameCN = "";

	UPROPERTY(EditAnywhere, BlueprintReadOnly, DisplayName="类型", Category="TableRowGameObject")
	int Type = 0;
};
