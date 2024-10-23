#pragma once
#include "Cruz.h"

#ifdef FZ_PLATFORM_WINDOWS

extern Froze::Application* Froze::CreateApplication();

int main(int argc, char** argv)
{

	auto app = Froze::CreateApplication();
	app->Run();
	delete app;


	return 0;
}


#endif // FZ_PLATFORM_WINDOWS