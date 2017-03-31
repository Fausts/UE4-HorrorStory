//$ Copyright 2015 Ali Akbar, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//
#pragma once
#include "Core/EditorMode/DungeonEdModeRenderer.h"
class USnapModel;
class USnapEdModeHandler;

class DUNGEONARCHITECTEDITOR_API FSnapEdModeRenderer : public FDungeonEdModeRenderer {
public:
	FSnapEdModeRenderer(USnapEdModeHandler* pModeHandler);
	virtual void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI, TSharedPtr<IDungeonEdTool> ActiveTool) override;
	virtual void Destroy() override;

private:
	USnapEdModeHandler* ModeHandler;
};