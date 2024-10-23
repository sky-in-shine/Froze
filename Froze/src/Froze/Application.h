#pragma once
#include "Cruz.h"

namespace Froze {
	class FROZE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};
	//客户端使用
	Application* CreateApplication();
}

