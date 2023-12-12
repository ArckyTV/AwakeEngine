#pragma once
#include "Core.h"


namespace Awake {

	class AWAKE_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();
	};


	Application* CreateApplication();

}