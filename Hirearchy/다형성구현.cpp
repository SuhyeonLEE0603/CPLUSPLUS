#include "Point.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Star.h"
#include "Hexahedron.h"
#include "ShapeManager.h"

//--------
int main()
//--------
{
	// �� ���α׷��� ������Ʈ�� Ȯ���ϱ� ���� ���̴�
	// �ǽ� ������� ������ �ذ��� ����

	// 1. ���� Ŭ������ ����
	ShapeManager sm(100);				// �ִ� 100���� ������ ������

	// 2. �������� ���� Ŭ������ ������
	sm.insert(new Triangle());
	sm.insert(new Triangle(Point(0, 0), Point(1, 1), Point(2, 2)));
	sm.insert(new Circle(Point(1.23, 4.56), 7.89));

	for (int i = 0; i < 10; ++i) {
		sm.insert(new Rectangle(Point(i, i + 1), Point(i * 2, i * 3)));
	}

	// 3. �����ϰ� �ִ� ��� ������ �׸�
	//sm.draw();

	// �� ���α׷����� �߸��� ���� ã�� �� �ִ°�?
	// - Circle ������ �������� int ������ ���ڸ� �ް� �ִ�
	// - �� ������ �Ҹ��ڰ� ȣ����� ����
	// �߸��� ���� ��� ã�� �� �ִ°�?
	// - ��� �ܼ� â���� Circle�� �������� ���������� �Ǿ� �ִ� ���� Ȯ���� �� �ִ�
	// - **�� Shape �迭�� ����Ű�� �����͸� �����ǰ� �迭 ���� ������ �������� ����

	// 4. �� ���� �� ������ �߰��� ���� ���α׷��� ������ ������ ����.
	// �������� ��� �����ǰ� �ִ��� Ȯ������
	sm.insert(new Star(Point(1, 1), Point(2, 2), Point(3, 3), Point(4, 4), Point(5, 5)));
	Rectangle * rect = new Rectangle[6]{ Rectangle (Point(1, 1), Point(2, 2)),
		Rectangle(Point(3, 3), Point(4, 4)),
		Rectangle(Point(5, 5), Point(6, 6)),
		Rectangle(Point(7, 7), Point(8, 8)),
		Rectangle(Point(9, 9), Point(10, 10)),
		Rectangle(Point(11, 11), Point(12, 12)) };
	sm.insert(new Hexahedron(rect));
	sm.draw();
	delete[] rect;
}