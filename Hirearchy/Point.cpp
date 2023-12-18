#include <iostream>
#include "Point.h"

// ����Ʈ ������
Point::Point()
	:x(0.0), y(0.0)
{

}

// ���� �� ���� �޴� ������
Point::Point(double a, double b) : x(a), y(b)
{
}

std::ostream& operator<<(std::ostream& os, const Point& p)
{
	os << "(" << p.x << ", " << p.y << ")";
	return os;
}
