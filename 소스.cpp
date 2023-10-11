// 2023. 10. 9 월										(6주 1일)
// 10월 25일(8주 2일) - 중간시험
//---------------------------------------------------------------------------
// [실습] 배열에 있는 많은 데이터를 읽고 쓰기
//---------------------------------------------------------------------------
// [과제] 값을 바꿔가며 반복 연습
//---------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <random>
#include "save.h"
using namespace std;

default_random_engine dre;
uniform_int_distribution uid;

//--------
int main()
//--------
{
	ofstream out{ "int만개.txt" };
	for (int i = 0; i < 10000; ++i) {
		out << uid(dre) << ' ';
		if (i % 10 == 0) {
			out << endl;
		}
	}

	save("소스.cpp");
}