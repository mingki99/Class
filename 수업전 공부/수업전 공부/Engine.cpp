#include "Engine.h"
#include "Actor.h"
#include <iostream>

using namespace std;

Engine::Engine()
{
	Init();
}


Engine::~Engine()
{
	for (size_t i = 0; i < Actors.size(); ++i)
	{
			delete Actors[i];
	}

	Actors.clear();
}

void Engine::Run()
{
	while (blsRunning)
	{
		Input();
		Tick();
		Render();
	}
}

void Engine::SpawnActor()
{
	Actors.push_back( new Actor());
}

void Engine::DestroyActor(int index)
{
	delete Actors[index];
	Actors.erase(Actors.begin()+index);
}

void Engine::Init()
{
}

void Engine::Term()
{
	//Heap 삭제
	for (size_t i = 0; i < Actors.size(); ++i)
	{
		delete Actors[i];
	}

}

void Engine::Tick()
{
	if (bFirstRun)
	{
		bFirstRun = false;
		BeginPlay();
	}
}

void Engine::BeginPlay()
{
	cout << "엔진 처음 실행" << endl;
}

void Engine::Input()
{
	cout << "엔진 입력처리" << endl;

	for (size_t i = 0; i < Actors.size(); ++i)
	{
		Actors[i]->Input();
	}
}

void Engine::Render()
{
	cout << "엔진 렌더링" << endl;

	for (size_t i = 0; i < Actors.size(); ++i)
	{
		Actors[i]->Render();
	}
}

void Engine::BeginOverlap()
{
}