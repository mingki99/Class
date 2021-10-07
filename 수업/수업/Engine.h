#pragma once
//엔진은 유저의 입력을 받고 처리하고 화면에 그린다.
// this 엔진은 플레이어를 가지고 있고 맵도 가지고 있다.
//1.엔진은 초기화 한다,			Initialize
//2.엔진은 입력을 받는다.		Input
//3.엔진은 정보를 처리한다.		Process
//4.엔진은 화면에 그린다.		Render
//5.엔진을 정리한다 (종료한다)	Terminalize

class Player;
class Map;

class Engine
{
public: // 엔진 사용하는사람

	Engine(); //Construtor
	~Engine(); //Destructor

	void Initialize();
	void Input();
	void Run();

	Player* player; //전방선언을 하면 밑에 선언을 하지않아도됀다!!
	Map* Map;	// 둘중하나만 해야한다

private: //엔진 개발하는사람

	void Process();
	void Render();
	void Terminalize();

};
