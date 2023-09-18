// 2023. 9. 18 월										(3주 1일)
// 이번 주 수요일 9/20 - 전시로 수업(3주 2일)을 대체 함
//---------------------------------------------------------------------------
// 많은 수의 int가 있다 - 어떻게 저장할건가? 어떤 작업을 하고 싶나?
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
	int numbers[1000];

	for (int i = 0; i < 1000; ++i) {
		numbers[i] = uid(dre);
	}

	for (int num : numbers) {
		cout << format("{:4d}", num);
	}
	cout << endl;

	int max = numeric_limits<int>::min();
	// [문제] 원하는 수를 하나 입력받아라
	// 그 수가 numbers에 있는 지 없는 지 찾아 출력하라

	int x;
	while(true) {
		cout << "원하는 수를 입력하시오" << endl;
		cin >> x;

		bool flag{ false };
		for (int num : numbers) {
			if (num == x) {
				flag = true;
				cout << "해당 수를 찾았습니다" << endl;
				break;
			}
		}

		if (not flag) {
			cout << "해당 수를 못 찾았습니다" << endl;
		}
	}
	
	//save("소스.cpp");
}
