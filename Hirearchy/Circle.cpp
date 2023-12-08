#include <iostream>
#include "Circle.h"

Circle::Circle()
	: center(), rad(0.0)
{
}

Circle::Circle(const Point& c, int r)
	: center(c), rad(r)
{
}

// ��������ڸ� ���α׷��� ������ �ִٸ� �ɹ������� ���� �����ؾ��Ѵ�
// ��������ڸ� ���α׷��ϸ鼭 �ƹ��͵� ���� ������ ��������� ������� �ʴ´�.

Circle::Circle(const Circle& other)
	:center(other.center), rad(other.rad)
{
}

Circle::~Circle()
{
}

void Circle::draw() const
{
	// �׸��� �׸��� ��� ���ڷ� ������ ����Ѵ�
	std::cout << "�� - �߽���(" << center.x << ", " << center.y
		<< ") ������ - " << rad << '\n';
}
