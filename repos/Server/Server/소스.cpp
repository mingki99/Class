#define  _WINSOCK_DEPRECATED_NO_WARNINGS 
#include <WinSock2.h> //Windows
#include <iostream> 

#pragma comment (lib, "ws2_32.lib")

using namespace std;

int main()
{
	WSAData wasData;

	SOCKET hServerSocket;
	SOCKET hClientSocket;

	SOCKADDR_IN serverAddr;
	SOCKADDR_IN clientAddr;

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
	serverAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	serverAddr.sin_port = htons(9190);


	//3. ip , port binding
	if (bind(hServerSocket, (SOCKADDR*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR)
	{
		cout << "error bind" << endl;
		exit(-1);
	}

	//4. 대기
	if (listen(hServerSocket, 0) == SOCKET_ERROR)
	{
		cout << "error bind" << endl;
		exit(-1);
	}

	//5. accept
	int clientAddrSize = sizeof(clientAddr);

	hClientSocket = accept(hServerSocket, (SOCKADDR*)&clientAddr, &clientAddrSize);
	if(hClientSocket == SOCKET_ERROR)
	{
		cout << "error bind" << endl;
		exit(-1);
	}

	char message[] = "Hello World";
	send(hClientSocket, message, sizeof(message), 0);
	
	closesocket(hClientSocket);
	closesocket(hServerSocket);

	return 0;

}