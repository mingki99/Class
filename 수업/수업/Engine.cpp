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
	cout << "�ʱ�ȭ �Ǿ����ϴ�." << endl;
}

void Engine::Input()
{
	cout << "�Է¹޴´�" << endl;
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
	cout << "ó���Ѵ�" << endl;
}

void Engine::Render()
{
	//system("cls")
	cout << "������ �Ѵ�" << endl;
}

void Engine::Terminalize()
{
}
