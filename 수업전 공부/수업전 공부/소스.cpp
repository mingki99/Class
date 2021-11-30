#include <iostream>
#include<sstream>
#include<algorithm>


using namespace std;

template <typename T>
class dynamic_array
{
	T* data;
	size_t n;

	//배열 크기를 인자로 받는 생성자 추가
public:
	dynamic_array(int n)
	{
		this->n = n;
		data = new T[n];
	}


	//복사 생성자 추가
	dynamic_array(const dynamic_array<T>& other)
	{
		n = other.n;
		data = new T[n];

		for (int i = 0; i < n; i++)
		{
			data[i] = other[i];
		}
	}

	T& operator[](int index)
	{
		return data[index];
	}

	{
		const T& operator[] (int index) const
		{
			return index;
		}

		T& at(int index)
		{
			if (index < n)
				return data[index];
			throw " index Out of range";
		}







	}








}


int main()
{
	
	return 0;
}


