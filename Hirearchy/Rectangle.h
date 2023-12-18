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
	virtual void print(std::ostream&) const override;

	friend std::ostream& operator<<(std::ostream&, const Rectangle&);
};


#endif


