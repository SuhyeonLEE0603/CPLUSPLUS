#include "Point.h"				// Point�� Tirangle���� ���
#include "Shape.h"				// Shape�� ��� ����

class Triangle : public Shape
{
	Point p1, p2, p3;

public:
	Triangle();
	Triangle(const Point&, const Point&, const Point&);
	Triangle(const Triangle&);
	virtual ~Triangle() override;

	virtual void draw() const override;		// virtual function�� overriding
};

