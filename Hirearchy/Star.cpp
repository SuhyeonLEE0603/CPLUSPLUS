#include <iostream>
#include "Star.h"

Star::Star()
{
}

Star::Star(const Point& a, const Point& b, const Point& c, const Point& d, const Point& e)
	:p1(a), p2(b), p3(c), p4(d), p5(e)
{
}

Star::Star(const Star& other)
	:p1(other.p1), p2(other.p2), p3(other.p3), p4(other.p4), p5(other.p5)
{
}

Star::~Star()
{
	std::cout << "별 삭제됨" << '\n';
}

void Star::draw() const
{
	std::cout << "별 - " << p1 << ", " << p2 << ", "
		<< p3 << ", " << p4 << ", " << p5  << '\n';
}

void Star::print(std::ostream& os) const
{
	os << "별 - " << p1 << ", " << p2 << ", "
		<< p3 << ", " << p4 << ", " << p5 << '\n';
}

std::ostream& operator<<(std::ostream& os, const Star& rect)
{
	rect.print(os);
	return os;
}
