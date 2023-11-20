// 2023. 11. 15 목										(11주 2일)
//---------------------------------------------------------------------------
// class
//---------------------------------------------------------------------------

#include <iostream>
#include "STRING.h"
#include <algorithm>
#include "save.h"
using namespace std;

void f(int);

void f(int n) {
	cout << "인자" << n << "을 전달받았습니다" << endl;
}

//--------
int main()
//--------
{
	(*f)(3);		// 함수 이름 자체는 주소이기 때문에 이렇게 코딩 가능

	//auto x = f;

	//x(100);

	// int a[10]
	
	void (*x)(int) = f;		// 함수를 함수포인터로 저장가능

	cout << sizeof(x) << endl;
	cout << typeid(x).name() << endl;

	save("소스.cpp");
}
