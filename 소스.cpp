// 2023. 10. 2 월										(5주 1일)
// 10월 25일(8주 2일) - 중간시험
//---------------------------------------------------------------------------
// change 함수
//---------------------------------------------------------------------------
// 정렬
//---------------------------------------------------------------------------

#include <iostream>
#include "save.h"
using namespace std;

void change(int&, int&);			// 선언과 정의를 반드시 나눠야함

//--------
int main()
//--------
{
	const int NUM = 10;
	int num[NUM]{ 10, 3, 8, 6, 1, 5, 2, 7, 4, 9 };

	// [문제] num에 있는 값 중 제일 큰 값을 오른쪽으로 옮겨라
	
	// buble sort
	for (int k = 1; k < NUM - 2; ++k) {
		for (int i = 0; i < NUM - k; ++i) {
			if (num[i] > num[i + 1]) {
				change(num[i], num[i + 1]);
			}
		}
	}

	for (int num : num) {
		cout << num << " ";
	}
	cout << endl;

	save("소스.cpp");
}

void change(int& p, int& q) {
	int temp{ p };
	p = q;
	q = temp;
}
