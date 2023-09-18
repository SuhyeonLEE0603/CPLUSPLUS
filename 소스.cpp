// 2023. 9. 18 월										(3주 1일)
// 이번 주 수요일 9/20 - 전시로 수업(3주 2일)을 대체 함
//---------------------------------------------------------------------------
// 많은 수의 int가 있다 - 어떻게 저장할건가? 어떤 작업을 하고 싶나?
//---------------------------------------------------------------------------

#include <iostream>
#include <random>
#include <format>
#include "save.h"
using namespace std;

default_random_engine dre;
uniform_int_distribution uid{ 1, 6 };

// [문제] 주사위를 1'0000 번 던졌다. 각 숫자의 출현 횟수와 확률을 출력하라
// 1 - 1670번, 확률 - 16.7%
// ...


//--------
int main()
//--------
{
	int nums[6]{};

	for (int i = 0; i < 1'0000; ++i) {
		nums[uid(dre) - 1]++;
	}

	for (int k = 0; k < 6; ++k) {
		cout << k + 1 << " - " << nums[k] << "번, 확률 - " << format("{:2.1f}", nums[k] / 100.0) << "%" << endl;
	}

	save("소스.cpp");
}
