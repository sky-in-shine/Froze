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
	//�ͻ���ʹ��
	Application* CreateApplication();
}

