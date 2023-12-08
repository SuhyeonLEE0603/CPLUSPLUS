#include <iostream>
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
	//sm.insert(new Triangle());
	//sm.insert(new Triangle(Point(0, 0), Point(1, 1), Point(2, 2)));
	//sm.insert(new Circle(Point(1.23, 4.56), 7.89));

	//for (int i = 0; i < 10; ++i) {
	//	sm.insert(new Rectangle(Point(i, i + 1), Point(i * 2, i * 3)));
	//}

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
	//sm.insert(new Star(Point(1, 1), Point(2, 2), Point(3, 3), Point(4, 4), Point(5, 5)));
	//Rectangle * rect = new Rectangle[6]{ Rectangle (Point(1, 1), Point(2, 2)),
	//	Rectangle(Point(3, 3), Point(4, 4)),
	//	Rectangle(Point(5, 5), Point(6, 6)),
	//	Rectangle(Point(7, 7), Point(8, 8)),
	//	Rectangle(Point(9, 9), Point(10, 10)),
	//	Rectangle(Point(11, 11), Point(12, 12))
	//};
	//sm.insert(new Hexahedron(rect));
	//sm.draw();
	//delete[] rect;

	// 5. 각 객체가 제대로 생성되고 소멸되는지 관찰해 보자
	// 잘못된 곳이 있다면 소스를 고쳐 한 byte의 메모리도 놓치지 않도록 하라
	// - 소멸자에 출력 및 메모리 해제 추가


	// 6. 프로그램이 메뉴에 따라 실행될 수 있도록 고쳐보자
	// Menu
	// - 원하는 도형 추가
	//		- 삼각형
	//		- 사각형
	//		- 원
	// - 전체 도형을 그리기
	// - 프로그램 끝내기

	while (true) {
		std::cout << "----------------------Memu----------------------" << '\n';
		int n;
		std::cout << "1. 원하는 도형 추가" << '\n';
		std::cout << "2. 전체 도형을 그리기" << '\n';
		std::cout << "3. 프로그램 끝내기" << '\n' << '\n';
		std::cin >> n;
		std::cout << '\n';

		switch (n)
		{
			int k;
		case 1:
			std::cout << '\t' << "1. 삼각형" << '\n';
			std::cout << '\t' << "2. 사각형" << '\n';
			std::cout << '\t' << "3. 원" << '\n';
			std::cout << '\t' << "4. 별" << '\n';
			std::cout << '\t' << "5. 육면체" << '\n';
			std::cin >> k;
			switch (k)
			{
				Shape* shape;
				double a, b;
			case 1:
				{
					std::cout << "삼각형의 점의 위치를 입력하세요" << '\n';

					std::cout << "첫번째 점 : ";
					std::cin >> a >> b;
					Point p1(a, b);

					std::cout << "두번째 점 : ";
					std::cin >> a >> b;
					Point p2(a, b);

					std::cout << "세번째 점 : ";
					std::cin >> a >> b;
					Point p3(a, b);

					std::cout << "삼각형이 만들어졌습니다.";
					shape = new Triangle(p1, p2, p3);
					shape->draw();

					std::cout << "삼각형을 추가합니다." << '\n';
					sm.insert(shape);

					break;
				}
			case 2:
				{
					std::cout << "사각형의 점의 위치를 입력하세요" << '\n';

					std::cout << "첫번째 점 : ";
					std::cin >> a >> b;
					Point p1(a, b);

					std::cout << "두번째 점 : ";
					std::cin >> a >> b;
					Point p2(a, b);

					std::cout << "사각형이 만들어졌습니다.";
					shape = new Rectangle(p1, p2);
					shape->draw();

					std::cout << "사각형을 추가합니다." << '\n';
					sm.insert(shape);

					break;
				}
			case 3:
				{
					std::cout << "원의 중심점의 위치와 반지름을 입력하세요" << '\n';

					std::cout << "중심점 : ";
					std::cin >> a >> b;
					Point p1(a, b);

					std::cout << "반지름 : ";
					std::cin >> a;

					std::cout << "원이 만들어졌습니다.";
					shape = new Circle(p1, a);
					shape->draw();

					std::cout << "원을 추가합니다." << '\n';
					sm.insert(shape);

					break;
				}
			case 4:
				{
					std::cout << "별의 점의 위치를 입력하세요" << '\n';

					std::cout << "첫번째 점 : ";
					std::cin >> a >> b;
					Point p1(a, b);

					std::cout << "두번째 점 : ";
					std::cin >> a >> b;
					Point p2(a, b);

					std::cout << "세번째 점 : ";
					std::cin >> a >> b;
					Point p3(a, b);

					std::cout << "네번째 점 : ";
					std::cin >> a >> b;
					Point p4(a, b);

					std::cout << "다섯번째 점 : ";
					std::cin >> a >> b;
					Point p5(a, b);

					std::cout << "별이 만들어졌습니다.";
					shape = new Star(p1, p2, p3, p4, p5);
					shape->draw();

					std::cout << "별을 추가합니다." << '\n';
					sm.insert(shape);

					break;
				}
			case 5:
				{
					Point p1, p2;
					Rectangle* rect = new Rectangle[6];
					std::cout << "육면체의 사각형의 위치를 입력하세요" << '\n';

					std::cout << "첫번째 사각형의 첫번째 점 : ";
					std::cin >> a >> b;
					p1.x = a;
					p1.y = b;

					std::cout << "첫번째 사각형의 두번째 점 : ";
					std::cin >> a >> b;
					p2.x = a;
					p2.y = b;
					rect[0] = Rectangle(p1, p2);

					std::cout << "두번째 사각형의 첫번째 점 : ";
					std::cin >> a >> b;
					p1.x = a;
					p1.y = b;

					std::cout << "두번째 사각형의 두번째 점 : ";
					std::cin >> a >> b;
					p2.x = a;
					p2.y = b;
					rect[1] = Rectangle(p1, p2);

					std::cout << "세번째 사각형의 첫번째 점 : ";
					std::cin >> a >> b;
					p1.x = a;
					p1.y = b;

					std::cout << "세번째 사각형의 두번째 점 : ";
					std::cin >> a >> b;
					p2.x = a;
					p2.y = b;
					rect[2] = Rectangle(p1, p2);

					std::cout << "네번째 사각형의 첫번째 점 : ";
					std::cin >> a >> b;
					p1.x = a;
					p1.y = b;

					std::cout << "네번째 사각형의 두번째 점 : ";
					std::cin >> a >> b;
					p2.x = a;
					p2.y = b;
					rect[3] = Rectangle(p1, p2);

					std::cout << "다섯번째 사각형의 첫번째 점 : ";
					std::cin >> a >> b;
					p1.x = a;
					p1.y = b;

					std::cout << "다섯번째 사각형의 두번째 점 : ";
					std::cin >> a >> b;
					p2.x = a;
					p2.y = b;
					rect[4] = Rectangle(p1, p2);

					std::cout << "여섯번째 사각형의 첫번째 점 : ";
					std::cin >> a >> b;
					p1.x = a;
					p1.y = b;

					std::cout << "여섯번째 사각형의 두번째 점 : ";
					std::cin >> a >> b;
					p2.x = a;
					p2.y = b;
					rect[5] = Rectangle(p1, p2);

					std::cout << "육면체가 만들어졌습니다.";
					shape = new Hexahedron(rect);
					shape->draw();

					std::cout << "육면체를 추가합니다." << '\n';
					sm.insert(shape);

					delete[] rect;
					break;
				}
			}
			break;
		case 2:
			sm.draw();
			break;
		case 3:
			std::cout << "프로그램을 종료합니다" << '\n';
			return 0;
		}
	}

}