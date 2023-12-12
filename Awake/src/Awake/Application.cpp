#include "Application.h"
#include <stdio.h>
namespace Awake { 

	Application::Application() 
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		printf("Hello world !");
		while (true);
	}
}