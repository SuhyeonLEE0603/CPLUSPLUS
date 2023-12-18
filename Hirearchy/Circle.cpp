#include <iostream>
#include "Circle.h"

Circle::Circle()
	: center(), rad(0.0)
{
}

Circle::Circle(const Point& c, double r)
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
	std::cout << "�� ������" << '\n';

}

void Circle::draw() const
{
	// �׸��� �׸��� ��� ���ڷ� ������ ����Ѵ�
	std::cout << "�� - �߽��� " << center
		<< " ������ - " << rad << '\n';
}

void Circle::print(std::ostream& os) const
{
	os << "�� - �߽��� " << center
		<< " ������ - " << rad << '\n';
}

std::ostream& operator<<(std::ostream& os, const Circle& circle)
{
	circle.print(os);
	return os;
}