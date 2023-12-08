#include "Rectangle.h"
#include "Shape.h"

class Hexahedron : public Shape
{
	Rectangle* rect;

public:
	Hexahedron();
	Hexahedron(Rectangle*);
	Hexahedron(const Hexahedron&);
	virtual ~Hexahedron() override;

	virtual void draw() const override;
};

