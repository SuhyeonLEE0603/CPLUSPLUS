#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle()
	:p1(), p2()
{
}

Rectangle::Rectangle(const Point& a, const Point& b)
	: p1(a), p2(b)
{
}

Rectangle::Rectangle(const Rectangle& other)
	:p1(other.p1), p2(other.p2)
{
}

Rectangle::~Rectangle()
{
	std::cout << "사각형 삭제됨" << '\n';
}

void Rectangle::draw() const
{
	std::cout << "사각형 - " << p1 
		<< ", " << p2 << '\n';
}

void Rectangle::print(std::ostream& os) const
{
	os << "사각형 - " << p1 << ", " << p2 << '\n';
}

std::ostream& operator<<(std::ostream& os, const Rectangle& rect)
{
	rect.print(os);
	return os;
}
