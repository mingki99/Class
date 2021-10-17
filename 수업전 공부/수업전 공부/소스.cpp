#include <iostream>
#include<vector>

#include "Character.h"
#include"Boar.h"
#include"Goblin.h"
#include"Player.h"
#include"Slime.h"
#include "Monster.h"

#include<time.h>
#include<stdlib.h>
using namespace std;




int main()
{
	
	
	
	vector<UCharacter*> Characters; 
	// UCharacter 의 포인터를 지정하고 변수를 지정해주무로써 
	// 변수안에 vector 형의 UCharacter 의 값이 들어간다.


	Characters.push_back(new PPlayer());
	//먼져 새로운 Plat 클래스 안에 UCharacter 의 값이 들어간다?


	srand(time(nullptr));
	//랜덤

	for (int i = 0; i < 10; i++)
	{
		int Type = rand() % 3;

		if (Type == 0)
		{
			Characters.push_back(new PBoar());
		}
		else if (1 == Type)
		{
			Characters.push_back(new PGoblin());
		}
		else
		{
			Characters.push_back(new PSlime());

		}
	}


	for (size_t i = 0; i < Characters.size(); ++i)
	{
		Characters[i] -> move();
	}
	for (UCharacter* PlayCharacters : Characters)
	{
		PlayCharacters->move();
	}
	for (auto iter = Characters.begin(); iter != Characters.end(); ++iter)
	{
		(*iter)->move();
	}
	//PGoblin* goblin = new PGoblin();

	//delete goblin;

	return 0;
}


