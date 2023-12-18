#include "Point.h"
#include "Shape.h"

#ifndef _Star
#define _Star

class Star : public Shape
{
	Point p1, p2, p3, p4, p5;

public:
	Star();
	Star(const Point&, const Point&, const Point&, const Point&, const Point&);
	Star(const Star&);
	virtual ~Star() override;

	virtual void draw() const override;
	virtual void print(std::ostream&) const override;

	friend std::ostream& operator<<(std::ostream&, const Star&);
};


#endif 

