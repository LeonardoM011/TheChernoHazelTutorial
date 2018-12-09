#pragma once

#ifdef HZ_PLATFORM_WINDOWS
    #ifdef HZ_BUILD_DLL
        #define HAZEL_API __declspec(dllexport)
    #else
        #define HAZEL_API __declspec(dllimport)
    #endif
#elif HZ_PLATFORM_LINUX
    #ifdef HZ_BUILD_DLL
        #define HAZEL_API __attribute__ ((visibility ("default")))
    #else
        #define HAZEL_API
    #endif
#else
    #error Hazel only supports Windows and Linux!
#endif
