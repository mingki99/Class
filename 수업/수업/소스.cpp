#include <iostream>
#include "Engine.h"
#include "Map.h"
#include "Player.h"



using namespace std;


int main()
{
	Engine engine;

	engine.Initialize();
	engine.Input();
	engine.Run();


	return 0;
}
	