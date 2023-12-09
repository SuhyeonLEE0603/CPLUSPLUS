#include "Point.h"
#include "Shape.h"

#ifndef _Rectangle
#define _Rectangle

class Rectangle : public Shape
{
	Point p1, p2;

public:
	Rectangle();
	Rectangle(const Point&, const Point&);
	Rectangle(const Rectangle&);
	virtual ~Rectangle() override;

	virtual void draw() const override;
};



#endif


