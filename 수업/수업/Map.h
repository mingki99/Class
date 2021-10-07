#pragma once
//플레이어가 이동 할 수 있으며 크기10*10 가진 맵이다.

class Player;
class Engine;

class Map
{
public:
	Map();
	
	int Size[10][10];

	~Map();
};

