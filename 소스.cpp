// 2023. 11. 15 목										(11주 2일)
//---------------------------------------------------------------------------
// class
// 2023. 12. 13 기말시험
//---------------------------------------------------------------------------

#include <iostream>
#include <algorithm>
#include "save.h"
#include "STRING.h"
using namespace std;

// 호출할 수(callable) 있는 것은 함수뿐이 아니다
// 1. 함수
// 2. 함수를 가리키는 포인터를 호출할 수 있다
// 3. () 연산자를 오버로딩한 객체를 호출할 수 있다 - function object

// Callable Type - 호출가능한 타입

// Dog가 ()연산자를 오버로딩 - () - function call operator

//--------
int main()
//--------
{
	int a[]{ 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
	
	class Dog {
	public:
		int operator()(int a, int b) {
			return a < b;
		}
	};

	Dog dog;

	// C++에서 정렬
	sort(begin(a), end(a), dog);

	for (int i : a) {
		cout << i << " ";
	}
	cout << endl;

	save("소스.cpp");
}
