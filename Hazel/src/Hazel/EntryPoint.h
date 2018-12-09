#pragma once

#ifdef HZ_PLATFORM_WINDOWS

    extern Hazel::Application *Hazel::CreateApplication();

    int main(int argc, char **argv) {
        auto app = Hazel::CreateApplication();
        app->Run();
        delete app;
        return 0;
    }

#elif HZ_PLATFORM_LINUX

    extern Hazel::Application *Hazel::CreateApplication();

    int main(int argc, char **argv) {
        auto app = Hazel::CreateApplication();
        app->Run();
        delete app;
        return 0;
    }

#else
    #error Hazel only supports Windows and Linux!
#endif
