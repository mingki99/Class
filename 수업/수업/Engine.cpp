#include "Engine.h"
#include <iostream>

using namespace std;

Engine::Engine()
{
}

Engine::~Engine()
{
}

void Engine::Initialize()
{
	cout << "초기화 되었습니다." << endl;
}

void Engine::Input()
{
	cout << "입력받는다" << endl;
}

void Engine::Run()
{
	while (true)
	{
		Input();
		Process();
		Render();

	}
}

void Engine::Process()
{
	cout << "처리한다" << endl;
}

void Engine::Render()
{
	//system("cls")
	cout << "렌더링 한다" << endl;
}

void Engine::Terminalize()
{
}
