#pragma once

#include "Modules/ModuleBase.h"
#include "Modules/ModuleGame.h"
#include "Modules/ModulePlayer.h"
#include "Modules/ModuleServer.h"
#include "Modules/ModuleCamera.h"
#include "Modules/ModuleInput.h"

namespace Modules
{
	class ElModules : public Utils::Singleton<ElModules>, public ModuleBase
	{
	public:
		ElModules();

	private:
	};
}