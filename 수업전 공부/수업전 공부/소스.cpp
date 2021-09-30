#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void Two();
void Three();
void Four();
void Five();
void Six();



int main()
{
	int a = 0;
	for (int b = 0; b <= 100; b++)
	{
		a = a + b;
	}

	cout << a << endl;

	Two();
	Three();
	Four();
	Five();
	Six();

}

void Two()
{
	int a = 0;
	for (int b = 0; b <= 100; b += 2)
	{
		a = a + b;
	}
	cout << a << endl;
}

void Three()
{
	int a = 0;
	for (int b = 1; b <= 100; b += 2)
	{
		a = a + b;
	}
	cout << a << endl;
}

void Four()
{
	for (int b = 1; b <= 15; b++)
	{
		for (int c = 0; c < b; c++)
		{
			cout << '*' ;
		}
		cout << endl;
	}
}


void Five()
{
	
	
	 // 1~ 10 까지 랜덤한 수 중복없이 를 출력하라 

	 srand(time(NULL));
	 cout << rand() << endl;
	 //10까지 들어갈 배열 공간이 필요한다


	 // 인덱스의 공간에 숫자를 입력해주자
	 int Array[100];

	 for (int i = 0; i < 100; i++)
	 {
		 Array[i] = i + 1; 
	 }

	 // 인덱스 shuffle
	 for (int i = 1; i <= 2; i++)
	 {
		int Index1 = rand() % 100; // 0~99
		int Index2 = rand() % 100;
		
		int a = Array[Index1];
		Array[Index1] = Array[Index2];
		Array[Index2] = a;
	 }

	 //난수 배열 출력

	 for (int i = 0; i < 100; i++)
	 {
		 cout << Array[i] << endl;
	 }
	


}


void Six()
{
	int a = 0;
	int b = 1;
	int c = 1;
	
	cout << "a 함수값은 :" << a << endl;
	cout << "b 함수값은 :" << b << endl;
	
	c = a;
	a = b;
	b = c;

	cout << "a 함수값은 :" << a << endl;
	cout << "b 함수값은 :" << b << endl;
	
}

