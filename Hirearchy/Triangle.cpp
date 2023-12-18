#include <iostream>
#include "Triangle.h"

Triangle::Triangle()
	:p1(), p2(), p3()
{
}

Triangle::Triangle(const Point& a, const Point& b, const Point& c)
	:p1(a), p2(b), p3(c)
{
}

Triangle::Triangle(const Triangle& other)
	:p1(other.p1), p2(other.p2), p3(other.p3)
{
}

Triangle::~Triangle()
{
	std::cout << "�ﰢ�� ������" << '\n';
}

void Triangle::draw() const
{
	std::cout << "�ﰢ�� - " << p1 << ", "
		<< p2 << ", " << p3  << '\n';
 }

void Triangle::print(std::ostream& os) const
{
	os << "�ﰢ�� - " << p1 << ", "
		<< p2 << ", " << p3 << '\n';
}

std::ostream& operator<<(std::ostream& os, const Triangle& tri)
{
	tri.print(os);
	return os;
}
