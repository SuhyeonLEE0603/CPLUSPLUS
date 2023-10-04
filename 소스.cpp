// 2023. 10. 2 월										(5주 1일)
// 10월 25일(8주 2일) - 중간시험
//---------------------------------------------------------------------------
// 정렬(sort) - C언어 라이브러리 함수 qsort
//---------------------------------------------------------------------------

#include <iostream>
#include <format>
#include <random>
#include "save.h"
using namespace std;

// [문제] int 값 여러개를 저장할 수 있는 배열을 만들어라
// 각 int값을 1부터 99'9999까지 값 중 랜덤값으로 만들어라
// 배열을 오름차순으로 정렬하라
// 일부분을 출력해서 정렬된 것을 확인하자

default_random_engine dre;
uniform_int_distribution uid{ 1, 99'9999 };
//--------
int main()
//--------
{
	const int NUM{ 1000 };
	int num[NUM];

	// &는 원래 데이터에 붙인 별명이니까 원본을 그대로 사용하고 싶을 떄 쓴다
	for (int& number : num) {
		number = uid(dre);
	}

	// 정렬 - qsort

	int 정렬방법(const void*,const void*);
	qsort(num, NUM, sizeof(int), 정렬방법);

	// 정렬 후 출력
	for (int num : num) {
		cout << format("{:8d}",num);
	}
	cout << '\n';
	save("소스.cpp");
}

int 정렬방법(const void* p, const void* q) {
	int a = *(int*)p;
	int b = *(int*)q;

	// 오름차순
	if (a > b) {
		return 1;
	}
	else if (a < b) {
		return -1;
	}

	return 0;

}
