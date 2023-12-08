#include "Point.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include "ShapeManager.h"

//--------
int main()
//--------
{
	// 이 프로그램을 프로젝트를 확인하기 위한 것이다
	// 실습 순서대로 문제를 해결해 보자

	// 1. 관리 클래스를 만듦
	ShapeManager sm(100);				// 최대 100개의 도형을 관리함

	// 2. 도형들을 관리 클래스에 삽입함
	sm.insert(new Triangle());
	sm.insert(new Triangle(Point(0, 0), Point(1, 1), Point(2, 2)));
	sm.insert(new Circle(Point(1.23, 4.56), 7.89));

	for (int i = 0; i < 10; ++i) {
		sm.insert(new Rectangle(Point(i, i + 1), Point(i * 2, i * 3)));
	}

	// 3. 관리하고 있는 모든 도형을 그림
	sm.draw();

	// 이 프로그램에서 잘못된 점을 찾을 수 있는가?
	// - Circle 생성시 반지름이 int 값으로 인자를 받고 있다
	// 잘못된 점을 어떻게 찾을 수 있는가?
	// - 출력 콘솔 창에서 Circle의 반지름이 정수형으로 되어 있는 것을 확인할 수 있다
}