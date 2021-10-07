#pragma once
//������ ������ �Է��� �ް� ó���ϰ� ȭ�鿡 �׸���.
// this ������ �÷��̾ ������ �ְ� �ʵ� ������ �ִ�.
//1.������ �ʱ�ȭ �Ѵ�,			Initialize
//2.������ �Է��� �޴´�.		Input
//3.������ ������ ó���Ѵ�.		Process
//4.������ ȭ�鿡 �׸���.		Render
//5.������ �����Ѵ� (�����Ѵ�)	Terminalize

class Player;
class Map;

class Engine
{
public: // ���� ����ϴ»��

	Engine(); //Construtor
	~Engine(); //Destructor

	void Initialize();
	void Input();
	void Run();

	Player* player; //���漱���� �ϸ� �ؿ� ������ �����ʾƵ��´�!!
	Map* Map;	// �����ϳ��� �ؾ��Ѵ�

private: //���� �����ϴ»��

	void Process();
	void Render();
	void Terminalize();

};
