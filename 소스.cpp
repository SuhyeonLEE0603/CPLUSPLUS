// 2023. 10. 2 월										(5주 1일)
// 10월 25일(8주 2일) - 중간시험
//---------------------------------------------------------------------------
// 정렬(sort)
//---------------------------------------------------------------------------

#include <iostream>
#include <format>
#include <random>
#include "save.h"
using namespace std;

default_random_engine dre;
uniform_int_distribution uid{ 1, 999 };

// [문제] int 값 1'000개를 저장할 수 있는 배열을 만들어라
// 각 int값을 1부터 999까지 값 중 랜덤값으로 만들어라
// 배열을 내림차순(descending order)으로 정렬하라
// 전체 1000개 값을 화면에 출력하라

//--------
int main()
//--------
{
	const int NUM{ 1000 };
	int num[NUM];		

	for (int i = 0; i < NUM; ++i) {
		num[i] = uid(dre);
	}

	// 정렬 - bubble sort
	for (int j = 0; j < NUM - 1; ++j) {
		for (int i = 0; i < NUM - 1; ++i) {
			if (num[i] < num[i + 1]) {
				int temp{ num[i] };
				num[i] = num[i + 1];
				num[i + 1] = temp;
			}
		}
	}

	// 정렬 후 출력
	for (int num : num) {
		cout << format("{:4d}",num);
	}
	cout << '\n';
	save("소스.cpp");
}
