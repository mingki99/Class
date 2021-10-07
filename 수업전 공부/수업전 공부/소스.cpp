#include <iostream>

#include <vector> //STL 

using namespace std;



int main()
{
	string a = "Hello World";

	string a0 = a.substr(0); //0 다음 count 가 없기에 끝까지 출력

	cout << a0 << endl;
	
	string a1 = a.substr(0, 5);// 0 에서 5번째까지

	cout << a1 << endl; // Hello 출력됨

	string a2 = a.substr(6, 5); // 5 번째부터 5개출력

	cout << a2 << endl;

	string a3 = a.substr(6, 50); // 6 번째부터 50 개지만 되는대까지 출력

	cout << a3 << endl;

	string a4 = a.substr (a.size() -3); // - 역으로 끝에서  카운트 3개

	cout << a4 << endl;
	
	
	return 0;
}