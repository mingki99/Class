#include <iostream>

#include <vector> //STL 

using namespace std;



int main()
{
	
	
	vector<int>b = { 10 };


	b.push_back(15);

	b.push_back(20);

	b.elase(1);

	
	cout << b.front() << endl;
	cout << b[1] << endl;
	cout << b.back() << endl;

	return 0;
}