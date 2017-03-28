//$ Copyright 2015 Ali Akbar, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//


#pragma once

#include "IDetailCustomization.h"

class FDungeonArchitectVisualGraphNodeCustomization : public IDetailCustomization
{
public:
	// IDetailCustomization interface
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
	// End of IDetailCustomization interface

	static TSharedRef<IDetailCustomization> MakeInstance();

private:
	TArray<UObject*> GetSelectedObjects(IDetailLayoutBuilder& DetailBuilder);
	void CustomizeTransformWidget(IDetailLayoutBuilder& DetailBuilder);
	void CustomizeSelectorLogic(IDetailLayoutBuilder& DetailBuilder);
	void CustomizeTransformLogic(IDetailLayoutBuilder& DetailBuilder);

};
