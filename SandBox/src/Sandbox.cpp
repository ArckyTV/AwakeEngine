#include <Awake.h>

class Sandbox : public Awake::Application {
public:
	Sandbox(){}
	~Sandbox(){}
};


Awake::Application* Awake::CreateApplication() {

	return new Sandbox();
}