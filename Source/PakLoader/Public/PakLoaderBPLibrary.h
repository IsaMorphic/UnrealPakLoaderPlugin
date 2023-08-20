// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/PakFile/Public/IPlatformFilePak.h"

#include "PakLoaderBPLibrary.generated.h"


UCLASS()
class PAKLOADER_API UPakLoaderBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintCallable)
		static bool LoadPakFileAndAddToRegistry(FString PakFilePath, FString PakMountDirectory);

};
