// 2023. 10. 4 수										(5주 2일)
// 10월 9일(6주 1일) - 동영상 강의
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

int cnt;

//--------
int main()
//--------
{
	const int NUM{ 20 };
	int num[NUM];
	
	// &는 원래 데이터에 붙인 별명이니까 원본을 그대로 사용하고 싶을 떄 쓴다
	for (int& number : num) {
		number = uid(dre);
	}

	// 정렬 - qsort

	int 비교함수(const void*,const void*);
	qsort(num, NUM, sizeof(int), 비교함수);		// generic function

	// 정렬 후 출력
	for (int num : num) {
		cout << format("{:8d}",num);
	}
	cout << "비교함수 호출 횟수 : " << cnt << '\n';
	save("소스.cpp");
}

int 비교함수(const void* a, const void* b) {
	++cnt;
	cout << "비교 - " << *(int*)a << ", " << *(int*)b << endl;
	return *(int*)a - *(int*)b;
}
