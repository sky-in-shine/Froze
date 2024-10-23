#include <Froze.h>

class SandBox : public Froze::Application
{
public:
	SandBox()
	{

	}
	~SandBox()
	{

	}
};

Froze::Application* Froze::CreateApplication()
{
	return new SandBox();
}