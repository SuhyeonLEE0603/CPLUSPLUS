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
	STRING s[5]{ "11월", "13일 입니다", "오늘은", "월요일입니다", "11주 1일째 입니다" };

	// [문제] s를 길이 오름차순으로 정렬하라

	qsort(s, 5, sizeof(s), [](const void* a, const void* b) {
		return (int)(((STRING*)a)->length() - ((STRING*)b)->length());
		});

	for (STRING s : s) {
		cout << s << endl;
	}

	//save("소스.cpp");
}