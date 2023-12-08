#include <iostream>
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
	//sm.insert(new Triangle());
	//sm.insert(new Triangle(Point(0, 0), Point(1, 1), Point(2, 2)));
	//sm.insert(new Circle(Point(1.23, 4.56), 7.89));

	//for (int i = 0; i < 10; ++i) {
	//	sm.insert(new Rectangle(Point(i, i + 1), Point(i * 2, i * 3)));
	//}

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
	//sm.insert(new Star(Point(1, 1), Point(2, 2), Point(3, 3), Point(4, 4), Point(5, 5)));
	//Rectangle * rect = new Rectangle[6]{ Rectangle (Point(1, 1), Point(2, 2)),
	//	Rectangle(Point(3, 3), Point(4, 4)),
	//	Rectangle(Point(5, 5), Point(6, 6)),
	//	Rectangle(Point(7, 7), Point(8, 8)),
	//	Rectangle(Point(9, 9), Point(10, 10)),
	//	Rectangle(Point(11, 11), Point(12, 12))
	//};
	//sm.insert(new Hexahedron(rect));
	//sm.draw();
	//delete[] rect;

	// 5. �� ��ü�� ����� �����ǰ� �Ҹ�Ǵ��� ������ ����
	// �߸��� ���� �ִٸ� �ҽ��� ���� �� byte�� �޸𸮵� ��ġ�� �ʵ��� �϶�
	// - �Ҹ��ڿ� ��� �� �޸� ���� �߰�


	// 6. ���α׷��� �޴��� ���� ����� �� �ֵ��� ���ĺ���
	// Menu
	// - ���ϴ� ���� �߰�
	//		- �ﰢ��
	//		- �簢��
	//		- ��
	// - ��ü ������ �׸���
	// - ���α׷� ������

	while (true) {
		std::cout << "----------------------Memu----------------------" << '\n';
		int n;
		std::cout << "1. ���ϴ� ���� �߰�" << '\n';
		std::cout << "2. ��ü ������ �׸���" << '\n';
		std::cout << "3. ���α׷� ������" << '\n' << '\n';
		std::cin >> n;
		std::cout << '\n';

		switch (n)
		{
			int k;
		case 1:
			std::cout << '\t' << "1. �ﰢ��" << '\n';
			std::cout << '\t' << "2. �簢��" << '\n';
			std::cout << '\t' << "3. ��" << '\n';
			std::cout << '\t' << "4. ��" << '\n';
			std::cout << '\t' << "5. ����ü" << '\n';
			std::cin >> k;
			switch (k)
			{
				Shape* shape;
				double a, b;
			case 1:
				{
					std::cout << "�ﰢ���� ���� ��ġ�� �Է��ϼ���" << '\n';

					std::cout << "ù��° �� : ";
					std::cin >> a >> b;
					Point p1(a, b);

					std::cout << "�ι�° �� : ";
					std::cin >> a >> b;
					Point p2(a, b);

					std::cout << "����° �� : ";
					std::cin >> a >> b;
					Point p3(a, b);

					std::cout << "�ﰢ���� ����������ϴ�.";
					shape = new Triangle(p1, p2, p3);
					shape->draw();

					std::cout << "�ﰢ���� �߰��մϴ�." << '\n';
					sm.insert(shape);

					break;
				}
			case 2:
				{
					std::cout << "�簢���� ���� ��ġ�� �Է��ϼ���" << '\n';

					std::cout << "ù��° �� : ";
					std::cin >> a >> b;
					Point p1(a, b);

					std::cout << "�ι�° �� : ";
					std::cin >> a >> b;
					Point p2(a, b);

					std::cout << "�簢���� ����������ϴ�.";
					shape = new Rectangle(p1, p2);
					shape->draw();

					std::cout << "�簢���� �߰��մϴ�." << '\n';
					sm.insert(shape);

					break;
				}
			case 3:
				{
					std::cout << "���� �߽����� ��ġ�� �������� �Է��ϼ���" << '\n';

					std::cout << "�߽��� : ";
					std::cin >> a >> b;
					Point p1(a, b);

					std::cout << "������ : ";
					std::cin >> a;

					std::cout << "���� ����������ϴ�.";
					shape = new Circle(p1, a);
					shape->draw();

					std::cout << "���� �߰��մϴ�." << '\n';
					sm.insert(shape);

					break;
				}
			case 4:
				{
					std::cout << "���� ���� ��ġ�� �Է��ϼ���" << '\n';

					std::cout << "ù��° �� : ";
					std::cin >> a >> b;
					Point p1(a, b);

					std::cout << "�ι�° �� : ";
					std::cin >> a >> b;
					Point p2(a, b);

					std::cout << "����° �� : ";
					std::cin >> a >> b;
					Point p3(a, b);

					std::cout << "�׹�° �� : ";
					std::cin >> a >> b;
					Point p4(a, b);

					std::cout << "�ټ���° �� : ";
					std::cin >> a >> b;
					Point p5(a, b);

					std::cout << "���� ����������ϴ�.";
					shape = new Star(p1, p2, p3, p4, p5);
					shape->draw();

					std::cout << "���� �߰��մϴ�." << '\n';
					sm.insert(shape);

					break;
				}
			case 5:
				{
					Point p1, p2;
					Rectangle* rect = new Rectangle[6];
					std::cout << "����ü�� �簢���� ��ġ�� �Է��ϼ���" << '\n';

					std::cout << "ù��° �簢���� ù��° �� : ";
					std::cin >> a >> b;
					p1.x = a;
					p1.y = b;

					std::cout << "ù��° �簢���� �ι�° �� : ";
					std::cin >> a >> b;
					p2.x = a;
					p2.y = b;
					rect[0] = Rectangle(p1, p2);

					std::cout << "�ι�° �簢���� ù��° �� : ";
					std::cin >> a >> b;
					p1.x = a;
					p1.y = b;

					std::cout << "�ι�° �簢���� �ι�° �� : ";
					std::cin >> a >> b;
					p2.x = a;
					p2.y = b;
					rect[1] = Rectangle(p1, p2);

					std::cout << "����° �簢���� ù��° �� : ";
					std::cin >> a >> b;
					p1.x = a;
					p1.y = b;

					std::cout << "����° �簢���� �ι�° �� : ";
					std::cin >> a >> b;
					p2.x = a;
					p2.y = b;
					rect[2] = Rectangle(p1, p2);

					std::cout << "�׹�° �簢���� ù��° �� : ";
					std::cin >> a >> b;
					p1.x = a;
					p1.y = b;

					std::cout << "�׹�° �簢���� �ι�° �� : ";
					std::cin >> a >> b;
					p2.x = a;
					p2.y = b;
					rect[3] = Rectangle(p1, p2);

					std::cout << "�ټ���° �簢���� ù��° �� : ";
					std::cin >> a >> b;
					p1.x = a;
					p1.y = b;

					std::cout << "�ټ���° �簢���� �ι�° �� : ";
					std::cin >> a >> b;
					p2.x = a;
					p2.y = b;
					rect[4] = Rectangle(p1, p2);

					std::cout << "������° �簢���� ù��° �� : ";
					std::cin >> a >> b;
					p1.x = a;
					p1.y = b;

					std::cout << "������° �簢���� �ι�° �� : ";
					std::cin >> a >> b;
					p2.x = a;
					p2.y = b;
					rect[5] = Rectangle(p1, p2);

					std::cout << "����ü�� ����������ϴ�.";
					shape = new Hexahedron(rect);
					shape->draw();

					std::cout << "����ü�� �߰��մϴ�." << '\n';
					sm.insert(shape);

					delete[] rect;
					break;
				}
			}
			break;
		case 2:
			sm.draw();
			break;
		case 3:
			std::cout << "���α׷��� �����մϴ�" << '\n';
			return 0;
		}
	}

}