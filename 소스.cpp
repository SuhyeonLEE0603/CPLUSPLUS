// 2023. 9. 25 월										(4주 1일)
// 10월 2일 (5주 1일) - 동영상 강의
// 10월 25일(6주 2일) - 중간시험
//---------------------------------------------------------------------------
// 변수와 메모리 - 전역변수, 지역변수, 동적할당 변수
//---------------------------------------------------------------------------
#include <iostream>
#include "save.h"
using namespace std;

int n;				// DATA - global variable

//--------
int main()
//--------
{
	int n;			// STACK - local variable
					// DATA, STACK은 n이란 이름으로 주소값에 엑세스하여 그 안의 값을 다룸

	new int;		// FREE Store - dynamically allocated variable -> DATA와 STACK이랑 다르게 주소값만 가지고 다룸
	// -> system(Operating system)에 요청
	save("소스.cpp");
}