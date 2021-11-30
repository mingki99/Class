#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <WinSock2.h> //Windows
#include <iostream> 

using namespace std;

#pragma comment (lib, "ws2_32.lib")

int main()
{
	WSAData wasData;

	SOCKET hServerSocket;

	SOCKADDR_IN serverAddr;

	//1.Winsock 초기화
	if (WSAStartup(MAKEWORD(2, 2), &wasData) != 0)
	{
		cout << "erro WSSStarup" << endl;
		exit(-1);
	}

	//2. Create Socket
	hServerSocket = socket(PF_INET, SOCK_STREAM, 0);
	if (hServerSocket == INVALID_SOCKET)
	{
		cout << "error socket" << endl;
		exit(-1);
	}

	memset(&serverAddr, 0, sizeof(serverAddr));// 메모리 초기화 전부 0으로 만들어준다.
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	serverAddr.sin_port = htons(9190);

	//3. connect
	if (connect(hServerSocket, (SOCKADDR*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR)
	{
		cout << "erro connect" << endl;
			exit(-1);
	}

	//6. recv
	char message[1024] ={0, };
	int recvLength = recv(hServerSocket , message , sizeof(message), 0);
	if (recvLength == -1)
	{
		cout << "erro WSSStarup" << endl;
		exit(-1);
	}

	cout << message << endl;

	closesocket(hServerSocket);
	
	WSACleanup();

	return 0;

}