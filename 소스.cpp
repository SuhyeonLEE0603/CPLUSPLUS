// 2023. 10. 9 월										(6주 1일)
// 10월 25일(8주 2일) - 중간시험
//---------------------------------------------------------------------------
// [실습] 배열에 있는 많은 데이터를 읽고 쓰기
//---------------------------------------------------------------------------
// [과제] 값을 바꿔가며 반복 연습
//---------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include "save.h"
using namespace std;

// [문제] 파일에 1부터 100까지 정수를 출력하라

//--------
int main()
//--------
{
	ofstream 파일{ "1부터 100까지" };

	for (int i = 0; i < 100; ++i) {
		파일 << i + 1 << ' ';
	}
	파일 << endl;
	save("소스.cpp");

}
