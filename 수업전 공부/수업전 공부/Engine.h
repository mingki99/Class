#pragma once


//STL , c++ �� ���� �۾��Ѵ�.
#include <vector>
#include <algorithm>

using namespace std;

class Actor;

class Engine
{
public:
	Engine();
	~Engine();

	void Run();

	void SpawnActor();
	void DestroyActor(int index);

private:
	void Init();
	void Term();
	void Tick();
	void BeginPlay();
	void Input();
	void Render();
	void BeginOverlap();

	vector<Actor*> Actors;

	bool blsRunning = true;
	bool bFirstRun = true;

	int CountOfActors = 0;
};
