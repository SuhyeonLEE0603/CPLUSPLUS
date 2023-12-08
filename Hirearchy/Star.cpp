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
	std::cout << "º° »èÁ¦µÊ" << '\n';
}

void Star::draw() const
{
	std::cout << "º° - (" << p1.x << ", " << p2.y << "), ("
		<< p2.x << ", " << p2.y << "), ("
		<< p3.x << ", " << p3.y << "), ("
		<< p4.x << ", " << p4.y << "), ("
		<< p5.x << ", " << p5.y << ")" << '\n';
}
