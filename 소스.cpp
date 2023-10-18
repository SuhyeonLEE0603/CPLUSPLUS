// 2023. 10. 18 ��										(7�� 2��)
// 10�� 25��(8�� 2��) - �߰�����
//---------------------------------------------------------------------------
// ����� ���� �ڷ���
//---------------------------------------------------------------------------
// [����] ������ �ڷ����� ���� ����� �ݺ� �н�
//---------------------------------------------------------------------------

#include <iostream>
#include <random>
#include "save.h"
using namespace std;

default_random_engine dre;
uniform_int_distribution uid{ -100, 100 };

struct Point2D{
	// data member, member variable
	int x;
	int y;

	void show() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

// [�ǽ�] �������� ���� Point2D 100�� ������
// (x, y)���� [-100, 100] �̴�
// ����(0, 0)���� �ݰ� 10�̸����� ������ ��ġ�� ��ź�� ������
// � ���� �� ��ź�� ������ �޴� �� ����϶�
// root ���� ���Ҷ��� sqrt �Լ��� ����ϸ� �ȴ�

//--------
int main()
//--------
{
	Point2D points[100];	// Point2D : ����� ���� �ڷ���, p : ��ü
	
	for (Point2D& point : points) {
		point.x = uid(dre);
		point.y = uid(dre);
	}

	for (Point2D& point : points) {
		if (sqrt(point.x * point.x + point.y * point.y) < 10) {
			point.show();
		}
	}
	save("�ҽ�.cpp");
}