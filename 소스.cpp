// 2023. 9. 27 월										(4주 2일)
// 10월 2일 (5주 1일) - 동영상 강의
// 10월 25일(6주 2일) - 중간시험
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
	int num[]{ 10, 3, 8, 6, 1, 5, 2, 7, 4, 9 };

	// [문제] num에 있는 값 중 제일 큰 값을 오른쪽으로 옮겨라
	int size = sizeof(num) / sizeof(int);

	for (int i = 0; i < size - 1; ++i) {
		if (num[i] > num[i + 1]) {
			change(num[i], num[i + 1]);
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
