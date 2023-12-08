#include "Point.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Star.h"
#include "Hexahedron.h"
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
	//sm.draw();

	// 이 프로그램에서 잘못된 점을 찾을 수 있는가?
	// - Circle 생성시 반지름이 int 값으로 인자를 받고 있다
	// - 각 도형의 소멸자가 호출되지 않음
	// 잘못된 점을 어떻게 찾을 수 있는가?
	// - 출력 콘솔 창에서 Circle의 반지름이 정수형으로 되어 있는 것을 확인할 수 있다
	// - **로 Shape 배열을 가르키는 포인터만 해제되고 배열 안의 값들은 해제되지 않음

	// 4. 더 많은 새 도형을 추가해 보며 프로그램의 동작을 이해해 보자.
	// 다형성이 어떻게 구형되고 있는지 확인하자
	sm.insert(new Star(Point(1, 1), Point(2, 2), Point(3, 3), Point(4, 4), Point(5, 5)));
	Rectangle * rect = new Rectangle[6]{ Rectangle (Point(1, 1), Point(2, 2)),
		Rectangle(Point(3, 3), Point(4, 4)),
		Rectangle(Point(5, 5), Point(6, 6)),
		Rectangle(Point(7, 7), Point(8, 8)),
		Rectangle(Point(9, 9), Point(10, 10)),
		Rectangle(Point(11, 11), Point(12, 12)) };
	sm.insert(new Hexahedron(rect));
	sm.draw();
	delete[] rect;
}