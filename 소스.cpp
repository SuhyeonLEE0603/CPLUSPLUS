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

// [문제] "int만개.txt"에는 int 값을 10000개가 있다
// 오름차순으로 정렬해서 출력하라

//--------
int main()
//--------
{
	ifstream in{ "int만개.txt" };
	if (!in) {
		cout << "해당 파일을 열 수 없음" << endl;
		return 0;
	}

	int a[10000];
	int i{};
	int n;
	
	while (in >> n) {
		a[i++] = n;

	}

	qsort(a, 10000, sizeof(int), [](const void* a, const void* b) {
		return *(int*)a - *(int*)b; }
	);

	for (int n : a) {
		cout << n << ' ';
	}

	cout << endl;

	save("소스.cpp");
}