#include "Rectangle.h"
#include "Shape.h"

#ifndef _Hexahedron
#define _Hexahedron

class Hexahedron : public Shape
{
	Rectangle* rect;

public:
	Hexahedron();
	Hexahedron(Rectangle*);
	Hexahedron(const Hexahedron&);
	virtual ~Hexahedron() override;

	virtual void draw() const override;
	virtual void print(std::ostream&) const override;

	friend std::ostream& operator<<(std::ostream&, const Hexahedron&);

};

#endif
