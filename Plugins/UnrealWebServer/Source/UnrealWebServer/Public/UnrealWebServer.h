// Copyright (c) 2017 Isara Technologies. All Rights Reserved.

#pragma once

#include "ModuleManager.h"

class FUnrealWebServerModule : public IModuleInterface
{
public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};