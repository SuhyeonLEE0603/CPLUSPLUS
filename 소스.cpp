// 2023. 9. 13 수										(2주 2일)
// 다음 주 수요일 9/20 - 전시로 수업(3주 2일)을 대체 함
//---------------------------------------------------------------------------
// 랜덤 엔진과 분포
//---------------------------------------------------------------------------

#include <iostream>
#include <random>			// 랜덤값과 분포를 사용하려면
#include <format>
#include <algorithm>
#include "save.h"
using namespace std;

default_random_engine dre;				// 랜덤값을 생성하는 엔진
uniform_int_distribution uid{ 1, 999 };

//--------
int main()
//--------
{
	int numbers[100];

	for (int i = 0; i < 100; ++i) {
		numbers[i] = uid(dre);
	}

	for (int num : numbers) {
		cout << format("{:4d}", num);
	}
	cout << endl;

	int max = numeric_limits<int>::min();
	// [문제] 제일 큰 값을 찾아 화면에 입력하시오
	for (int num : numbers) {
		if (num > max) {
			max = num;
		}
	}
	cout << "제일 큰 값 - " << max << endl;

	save("소스.cpp");
}
