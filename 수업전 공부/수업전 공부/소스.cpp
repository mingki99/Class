#include <iostream>
#include "Engine.h"
#include "Actor.h"
#include <vector> //STL 
#include <list>

using namespace std;



int main()
{
	list<int> ListintStore;

	vector<int> intstore;

	for (int i = 1; i <= 10; ++i)
	{
		intstore.push_back(i);
	}

	intstore.erase(intstore.begin() + 2);
	intstore.insert(intstore.begin);

	for (int i = 1; i <= 10; ++i)
	{
		cout << intstore[i] << endl;
	}

	//Engine* engine = new Engine();

	////Wall , Player , Goal = (Object)
	//engine->SpawnActor();
	//engine->SpawnActor();
	//engine->SpawnActor();
	//engine->SpawnActor();

	//engine->DestroyActor(0);
	//engine->DestroyActor(0);
	//engine->DestroyActor(0);
	//engine->DestroyActor(0);
	//engine->Run();

	//delete engine;

	return 0;
}