#include <iostream>
#include <conio.h>
#include <Windows.h>


using namespace std;

void Infut();
void Process();
void Draw();
void MovePlayer(int XDirection,int YDirection);





int PlayerX = 1;
int PlayerY = 1;

int Map[10][10] = 
{
{1,1,1,1,1,1,1,1,1,1},
{1,0,0,0,0,1,0,1,0,1},
{1,0,1,0,0,0,0,0,0,1},
{1,0,1,0,1,1,0,1,0,1},
{1,0,1,0,1,1,0,1,0,1},
{1,0,0,0,0,0,0,1,0,1},
{1,0,0,0,1,0,0,1,0,1},
{1,0,1,0,1,0,0,1,0,1},
{1,0,1,0,1,0,0,1,9,1},
{1,1,1,1,1,1,1,1,1,1}
};

bool bGameState = true;
int Key;


int main()
{
	while (bGameState)
	{
		Infut();
		Process();
		Draw();
	}
	return 0;
}

void Infut()
{
	Key = _getch();
	if (Key == 0x00 || Key == 0xE0)
	{
		// 확장키의 경우 키를 하나더 입력 받는다.
		Key = _getch();
	}
}

void Process()
{

	
	switch (Key)
	{
	case 'w':
	case 'W':
	{
		MovePlayer(0, -1);
		break;
	}
	case 's':
	case 'S':
	{
		MovePlayer(0, 1);
		break;
	}
	case 'a':
	case 'A':
	{
		MovePlayer(-1, 0);
		break;
	}
	case 'd':
	case 'D':
	{
		MovePlayer(1, 0);
		break;
	}
	case 'Q':
	case 'q':
	{
		bGameState = false;
		break;
	}

	
	}
}

void Draw()
{
	system("cls");
	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (PlayerX == X && PlayerY == Y)
			{
				cout << "p" << " ";
			}
			else if (Map[X][Y] == 0)
			{
				cout << " " << " ";
			}
			else if (Map[X][Y] == 1)
			{
				cout << "X" << " ";
			}

		}
		cout << endl;
	}
}

void MovePlayer(int XDirection, int YDirection)
{
	int XNewPlayer = PlayerX + XDirection;
	int YNewPlayer = PlayerY + YDirection;

	

}




	



