#pragma once

#ifdef FL_PLATFORM_WINDOWS
	#ifdef FL_BUILD_DLL
		#define FL_API __declspec(dllexport)
	#else
		#define FL_API __declspec(dllimport)
	#endif
#else Fuligin only supports windows
#endif