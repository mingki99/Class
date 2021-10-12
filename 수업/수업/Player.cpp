#include "Player.h"
#include <iostream>
#include <windows.h>

APlayer::APlayer()
{
}

APlayer::~APlayer()
{
}

//void APlayer::Input()
//{
//}

void APlayer::Render()
{
	COORD Cur;
	Cur.X =Location.X;
	Cur.Y =Location.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	
	std::cout << "P" << std::endl;
}

//void APlayer::Tick()
//{
//}