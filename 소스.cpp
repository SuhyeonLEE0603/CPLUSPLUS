// 2023. 10. 18 수										(7주 2일)
// 10월 25일(8주 2일) - 중간시험
//---------------------------------------------------------------------------
// 사용자 정의 자료형
//---------------------------------------------------------------------------
// [과제] 나만의 자료형을 많이 만들고 반복 학습
//---------------------------------------------------------------------------

#include <iostream>
#include <random>
#include "save.h"
using namespace std;

default_random_engine dre;
uniform_int_distribution uid{ -100, 100 };

struct Point2D{
	// data member, member variable
	int x;
	int y;

	void show() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

// [실습] 랜덤값을 갖는 Point2D 100개 만들어라
// (x, y)값은 [-100, 100] 이다
// 원점(0, 0)에서 반경 10미만까지 영향을 미치는 폭탄이 터졌다
// 어떤 점이 이 폭탄에 영향을 받는 지 출력하라
// root 값을 구할때는 sqrt 함수를 사용하면 된다

//--------
int main()
//--------
{
	Point2D points[100];	// Point2D : 사용자 정의 자료형, p : 객체
	
	for (Point2D& point : points) {
		point.x = uid(dre);
		point.y = uid(dre);
	}

	for (Point2D& point : points) {
		if (sqrt(point.x * point.x + point.y * point.y) < 10) {
			point.show();
		}
	}
	save("소스.cpp");
}