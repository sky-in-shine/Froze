#pragma once
#if FZ_PLATFORM_WINDOWS
	#ifdef FZ_BUILD_DLL
		#define FROZE_API __declspec(dllexport)
	#else
		#define FROZE_API __declspec(dllimport)
	#endif // FZ_BUILD_DLL
#else
	#error PROZE ONLY support WINDOW;
#endif // FZ_PLATFORM_WINDOWS
