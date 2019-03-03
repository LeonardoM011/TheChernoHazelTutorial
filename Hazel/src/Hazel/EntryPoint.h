#pragma once

#ifdef HZ_PLATFORM_WINDOWS

	extern Hazel::Application *Hazel::CreateApplication();

	int main(int argc, char **argv) {

		Hazel::Log::Init();
		HZ_CORE_WARN("Initialized Log!");
		int a = 5;
		HZ_INFO("Hello! {0}", a);

		auto app = Hazel::CreateApplication();
		app->Run();
		delete app;
	}

#elif HZ_PLATFORM_LINUX

	#error Hazel not configured to run on Linux yet
    
#endif
