#pragma once

#ifdef AWAKE_WINDOWS_PLATFORM
	#ifdef AWAKE_BUILD_DLL
		#define AWAKE_API __declspec(dllexport)
	#else
		#define AWAKE_API __declspec(dllimport)
	#endif
#else
	#error AwakeEngine only supports Windows
#endif