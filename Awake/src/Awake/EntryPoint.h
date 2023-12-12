#pragma once

#ifdef AWAKE_WINDOWS_PLATFORM

extern Awake::Application* Awake::CreateApplication();


int main(int argc, char** argv)
{
	printf("Engine started");
	auto app = Awake::CreateApplication();
	app->Run();
	delete app;

}

#endif