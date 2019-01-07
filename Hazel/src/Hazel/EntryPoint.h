#pragma once

#ifdef HZ_PLATFORM_WINDOWS

    #error Hazel not configured to run on Windows yet

#elif HZ_PLATFORM_LINUX

    extern Hazel::Application *Hazel::CreateApplication();

    int main(int argc, char **argv) {

        Hazel::Log::Init();
        HZ_CORE_WARN("Initialized Log!");
        int a = 5;
        HZ_INFO("Hello! {0}", a);

        auto app = Hazel::CreateApplication();
        app->Run();
        delete app;
        
        return 0;
    }

#else
    #error Hazel only supports Windows and Linux!
#endif
