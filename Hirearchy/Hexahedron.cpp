#include <iostream>
#include "Hexahedron.h"

Hexahedron::Hexahedron()
{
	rect = new Rectangle[6];
}

Hexahedron::Hexahedron(Rectangle* arr)
{
	rect = new Rectangle[6];
	for (int i = 0; i < 6; ++i) {
		rect[i] = arr[i];
	}
}

Hexahedron::Hexahedron(const Hexahedron& other)
{
	for (int i = 0; i < 6; ++i) {
		rect[i] = other.rect[i];
	}
}

Hexahedron::~Hexahedron()
{
	std::cout << "À°¸éÃ¼ »èÁ¦µÊ" << '\n';
	delete[] rect;
}

void Hexahedron::draw() const
{
	std::cout << "À°¸éÃ¼ - (" << '\n';
	for (int i = 0; i < 6; ++i) {
		std::cout << '\t' << rect[i];
	}
	std::cout << ")" << '\n';
}

void Hexahedron::print(std::ostream& os) const
{
	os << "À°¸éÃ¼ - (" << '\n';
	for (int i = 0; i < 6; ++i) {
		os << '\t' << rect[i];
	}
	os << ")" << '\n';
}

std::ostream& operator<<(std::ostream& os, const Hexahedron& hexahedron)
{
	hexahedron.print(os);
	return os;
}