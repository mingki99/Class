#include <iostream>
#include <conio.h>

using namespace std;

void Input();
void Process();
void Draw();
void MovePlayer(int XDirection, int YDirection);

//1. ������ �ʱ�ȭ �Ѵ�.
int Map[10][10] =
{
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1,0,0,1},
	{1,0,1,0,0,0,1,0,0,1},
	{1,0,1,0,0,0,1,0,0,1},
	{1,0,1,0,0,0,1,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,1,0,0,1,0,1},
	{1,0,0,0,1,0,0,1,0,1},
	{1,0,0,0,1,0,0,1,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};

int PlayerX = 1;
int PlayerY = 1;

bool bIsRunning = true;
int Key;


int main()
{
	while (bIsRunning)
	{
		Input();
		Process();
		Draw();
	}

	return 0;
}

void Input()
{
	Key = _getch();
	if (Key == 0x00 || Key == 0xE0)
	{
		// Ȯ��Ű�� ��� Ű�� �ϳ��� �Է� �޴´�.
		Key = _getch();
	}
}

void Process()
{
	switch (Key)
	{
		//up
	case 'W':
	case 'w':
	{
		MovePlayer(0, -1);
		break;
	}
	//down
	case 'S':
	case 's':
	{
		MovePlayer(0, 1);
		break;
	}
	//left
	case 'A':
	case 'a':
	{
		MovePlayer(-1, 0);
		break;
	}
	//right
	case 'D':
	case 'd':
	{
		MovePlayer(1, 0);
		break;
	}

	//quit
	case 'Q':
	case 'q':
	{
		bIsRunning = false;
		break;
	}
	}
}

void Draw()
{
	//ȭ���� �����.
	

	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (PlayerX == X && PlayerY == Y)
			{
				cout << "P" << " ";
			}
			else if (Map[Y][X] == 0)
			{
				cout << " " << " ";
			}
			else if (Map[Y][X] == 1 )
			{
				cout << "X" << " ";
			}
			
		}

		cout << endl;
	}
}

void MovePlayer(int XDirection, int YDirection)
{
	//���� ������ ���
	PlayerX = PlayerX + XDirection;
	PlayerY = PlayerY + YDirection;

	//�̸� ����
	
}