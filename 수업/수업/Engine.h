#pragma once
#include "Vector2D.h"
#include <Windows.h>
#include "Actor.h"

class UEngine
{
public: 
	UEngine();
	~UEngine();

	
	
	void Run();

	void SpawnPlayer(FVector2D NewLocation);
	void SpawnWall(FVector2D NewLocation);
	void SpawnGoal(FVector2D NewLocation);
	void SpawnFloor(FVector2D NewLocation);

private: 

	bool bIsRunning = false;

	void Init();
	void Term();

	void Input();
	void Tick();
	void Render();

	class UWorld* World;
};


