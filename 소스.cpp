// 2023. 10. 9 월										(6주 1일)
// 10월 25일(8주 2일) - 중간시험
//---------------------------------------------------------------------------
// 실행 파일과 메모리(DATA)
//---------------------------------------------------------------------------
// 과제 - C++ STACK DATA CODE Free Store
//---------------------------------------------------------------------------

#include <iostream>
#include "save.h"
using namespace std;

// [문제] 사용할 수 있는 전역변수의 크기는 ? 2GB로 제한되어 있음
char a[1'000'000'000];

//--------
int main()
//--------
{
	cout << static_cast<int>(a[0]) << endl;
	save("소스.cpp");
}
