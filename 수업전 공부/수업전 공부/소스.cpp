#include <iostream>
#include "Engine.h"
#include "Actor.h"
#include <vector> //STL 

using namespace std;


//template function
template<typename T ,typename Y>

T Add(T a, Y b)
{
	return a + b;
}

//template class
template <typename T>
class NumerStore
{
puplic:
	T Store[100]
};

int main()
{
	NumerStore<int> intStore;
	NumerStore<string> strings;



	float a = 2.5;
	int b = 3;

	string f = "이것은";
	char q = '*';

	int c = 5;
	float d = 2.5;

	cout << Add<string, char>(f, q) << endl;
	cout << Add<


	cout << Add<float,int>(a, b) << endl;
	cout << Add<int,float>(c, d) << endl;


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