//$ Copyright 2015 Ali Akbar, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once

#include "Engine/DataAsset.h"
#include "SnapDoorAssetFactory.generated.h"

UCLASS()
class DUNGEONARCHITECTEDITOR_API USnapDoorAssetFactory : public UFactory {
	GENERATED_UCLASS_BODY()

	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	virtual bool CanCreateNew() const override;
	// End of UFactory interface
};