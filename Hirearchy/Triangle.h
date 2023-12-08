#include "Point.h"				// Point를 Tirangle에서 사용
#include "Shape.h"				// Shape을 상속 받음

class Triangle : public Shape
{
	Point p1, p2, p3;

public:
	Triangle();
	Triangle(const Point&, const Point&, const Point&);
	Triangle(const Triangle&);
	virtual ~Triangle() override;

	virtual void draw() const override;		// virtual function을 overriding
};

