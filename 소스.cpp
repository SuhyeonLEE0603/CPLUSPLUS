// 2023. 10. 4 수										(5주 2일)
// 10월 9일(6주 1일) - 동영상 강의
// 10월 25일(8주 2일) - 중간시험
//---------------------------------------------------------------------------
// 정렬(sort) - C언어 라이브러리 함수 qsort
//---------------------------------------------------------------------------

#include <iostream>
#include "save.h"
using namespace std;

int comp(const void*, const void*);

//--------
int main()
//--------
{
	char p[] = "the quick brown fox jumps over the lazy dog";
	cout << p << endl;

	// [문제] p를 오름차순으로 정렬한 후 출력하라
	qsort(p, strlen(p), sizeof(char), comp);

	cout << p << endl;
	
	save("소스.cpp");
}

int comp(const void* a, const void* b) {
	return *(char*)a - *(char*)b;
}
