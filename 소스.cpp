// 2023. 9. 25 월										(4주 1일)
// 10월 2일 (5주 1일) - 동영상 강의
// 10월 25일(6주 2일) - 중간시험
//---------------------------------------------------------------------------
// 변수와 메모리 - 전역변수, 지역변수, 동적할당 변수
//---------------------------------------------------------------------------
#include <iostream>
#include "save.h"
using namespace std;

int gn[10];

//--------
int main()
//--------
{
	int n[10];

	int* p = new int[10];

	// 각 int는 살고 있는 곳이 다르다

	cout << addressof(n) << endl;
	cout << addressof(gn) << endl;
	cout << p << endl;

	// STACK : n, p
	// DATA : n
	// Free Store : new int

	save("소스.cpp");
}