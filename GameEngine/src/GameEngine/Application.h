#pragma once

#include "Core.h"

namespace GameEngine {
	class E_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}

