// 2023. 11. 13 월										(11주 1일)
//---------------------------------------------------------------------------
// class
//---------------------------------------------------------------------------

#include <iostream>
#include "STRING.h"
#include "save.h"
using namespace std;

//--------
int main()
//--------
{
	STRING s{ "C++ Programming Language - Operator Overloading" };

	// [문제] s의 문자열을 오름차순으로 정렬하라

	qsort(&s[0], s.length(), sizeof(char), [](const void* a, const void* b) {
		return *(char*)a - *(char*)b;
		});

	cout << s << endl;
	
	save("소스.cpp");
}