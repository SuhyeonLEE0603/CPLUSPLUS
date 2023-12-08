#include "Point.h"
#include "Shape.h"

// 헤더에서는 include 대신에 전방선언(forward declaration)을 할 수 있다
// struct Point;
// class Shape;

class Circle : public Shape
{
	Point center;					// 중심점의 좌표
	double rad;						// 반지름
public:

	Circle();
	Circle(const Point&, int);
	Circle(const Circle&);			// 깊은 복사를 할 필요가 없으면 프로그래머가 복사생성자를 프로그램할 필요는 없다
									// 만약 어떤 이유로 프로그램해야 한다면 메모리를 이해하고 코딩 해야 한다

	// 위 설명을 다음 줄과 같이 선언하여 대치할 수 있다
	// Circle(const Circle&) = default;
	~Circle();						// 소멸자를 프로그램할 필요가 없다는 것을 생각해 보자

	virtual void draw() const override;
};

