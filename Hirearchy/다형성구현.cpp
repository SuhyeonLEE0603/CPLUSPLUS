#include <iostream>
#include <limits>
#include "Point.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Star.h"
#include "Hexahedron.h"
#include "ShapeManager.h"
using namespace std;

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

	// 7. �޴��� �׸��� �߰��Ͽ� ����ڰ� ������ ������ ������ �� �ְ� ����
	// �����ϴ� ������ ��ȣ�� ����
	// ������ Ŭ������ ��� ������ ����

	// 8. ���������ڰ� ������ �� �ִ� ������ ������ �� á�ٰ� ��������.
	// �̷� ��쿡�� ���ο� ������ �߰��� �� �ֵ��� ���α׷��� ���ĺ���

	while (true) {
		cout << "----------------------Memu----------------------" << '\n';
		int n;
		cout << "1. ���ϴ� ���� �߰�" << '\n';
		cout << "2. ��ü ������ �׸���" << '\n';
		cout << "3. ���� �����ϱ�" << '\n';
		cout << "4. ���α׷� ������" << '\n' << '\n';
		cin >> n;

		if (cin.fail()) {
			cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // �߸��� �Է� ����
			cout << "�߸��� �Է��Դϴ�. ������ �Է��ϼ���\n";
			continue;
		}
		else if (n < 0 || n > 5) {
			cout << "�Է� ������ �߸��Ǿ����ϴ�. 1���� 5 ������ ������ �Է��ϼ���.\n";
			continue;
		}

		switch (n)
		{
			Shape* shape;
			int k;
		case 1:
			cout << "\t1. �ﰢ��" << '\n';
			cout << "\t2. �簢��" << '\n';
			cout << "\t3. ��" << '\n';
			cout << "\t4. ��" << '\n';
			cout << "\t5. ����ü" << '\n';
			cin >> k;

			if (cin.fail()) {
				cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // �߸��� �Է� ����
				cout << "�߸��� �Է��Դϴ�. ������ �Է��ϼ���\n";
				continue;
			}
			else if (k < 0 || k > 6) {
				cout << "�Է� ������ �߸��Ǿ����ϴ�. 1���� 5 ������ ������ �Է��ϼ���.\n";
				continue;
			}

			switch (k)
			{
				double a, b;
			case 1:
			{
				cout << "�ﰢ���� ���� ��ġ�� �Է��ϼ���" << '\n';

				cout << "ù��° �� : ";
				cin >> a >> b;
				Point p1(a, b);

				cout << "�ι�° �� : ";
				cin >> a >> b;
				Point p2(a, b);

				cout << "����° �� : ";
				cin >> a >> b;
				Point p3(a, b);

				cout << "�ﰢ���� ����������ϴ�.";
				shape = new Triangle(p1, p2, p3);
				shape->draw();

				cout << "�ﰢ���� �߰��մϴ�." << '\n';
				sm.insert(shape);

				break;

			}
			case 2:
			{
				cout << "�簢���� ���� ��ġ�� �Է��ϼ���" << '\n';

				cout << "ù��° �� : ";
				cin >> a >> b;
				Point p1(a, b);

				cout << "�ι�° �� : ";
				cin >> a >> b;
				Point p2(a, b);

				cout << "�簢���� ����������ϴ�.";
				shape = new Rectangle(p1, p2);
				shape->draw();

				cout << "�簢���� �߰��մϴ�." << '\n';
				sm.insert(shape);

				break;

			}
			case 3:
			{
				cout << "���� �߽����� ��ġ�� �������� �Է��ϼ���" << '\n';

				cout << "�߽��� : ";
				cin >> a >> b;
				Point p1(a, b);

				cout << "������ : ";
				cin >> a;

				cout << "���� ����������ϴ�.";
				shape = new Circle(p1, a);
				shape->draw();

				cout << "���� �߰��մϴ�." << '\n';
				sm.insert(shape);

				break;

			}
			case 4:
			{
				cout << "���� ���� ��ġ�� �Է��ϼ���" << '\n';

				cout << "ù��° �� : ";
				cin >> a >> b;
				Point p1(a, b);

				cout << "�ι�° �� : ";
				cin >> a >> b;
				Point p2(a, b);

				cout << "����° �� : ";
				cin >> a >> b;
				Point p3(a, b);

				cout << "�׹�° �� : ";
				cin >> a >> b;
				Point p4(a, b);

				cout << "�ټ���° �� : ";
				cin >> a >> b;
				Point p5(a, b);

				cout << "���� ����������ϴ�.";
				shape = new Star(p1, p2, p3, p4, p5);
				shape->draw();

				cout << "���� �߰��մϴ�." << '\n';
				sm.insert(shape);

				break;

			}
			case 5:
			{
				Point p1, p2;
				Rectangle* rect = new Rectangle[6];
				cout << "����ü�� �簢���� ��ġ�� �Է��ϼ���" << '\n';

				cout << "ù��° �簢���� ù��° �� : ";
				cin >> a >> b;
				p1.x = a;
				p1.y = b;

				cout << "ù��° �簢���� �ι�° �� : ";
				cin >> a >> b;
				p2.x = a;
				p2.y = b;
				rect[0] = Rectangle(p1, p2);

				cout << "�ι�° �簢���� ù��° �� : ";
				cin >> a >> b;
				p1.x = a;
				p1.y = b;

				cout << "�ι�° �簢���� �ι�° �� : ";
				cin >> a >> b;
				p2.x = a;
				p2.y = b;
				rect[1] = Rectangle(p1, p2);

				cout << "����° �簢���� ù��° �� : ";
				cin >> a >> b;
				p1.x = a;
				p1.y = b;

				cout << "����° �簢���� �ι�° �� : ";
				cin >> a >> b;
				p2.x = a;
				p2.y = b;
				rect[2] = Rectangle(p1, p2);

				cout << "�׹�° �簢���� ù��° �� : ";
				cin >> a >> b;
				p1.x = a;
				p1.y = b;

				cout << "�׹�° �簢���� �ι�° �� : ";
				cin >> a >> b;
				p2.x = a;
				p2.y = b;
				rect[3] = Rectangle(p1, p2);

				cout << "�ټ���° �簢���� ù��° �� : ";
				cin >> a >> b;
				p1.x = a;
				p1.y = b;

				cout << "�ټ���° �簢���� �ι�° �� : ";
				cin >> a >> b;
				p2.x = a;
				p2.y = b;
				rect[4] = Rectangle(p1, p2);

				cout << "������° �簢���� ù��° �� : ";
				cin >> a >> b;
				p1.x = a;
				p1.y = b;

				cout << "������° �簢���� �ι�° �� : ";
				cin >> a >> b;
				p2.x = a;
				p2.y = b;
				rect[5] = Rectangle(p1, p2);

				cout << "����ü�� ����������ϴ�.";
				shape = new Hexahedron(rect);
				shape->draw();

				cout << "����ü�� �߰��մϴ�." << '\n';
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
			cout << "\t1. �����ϴ� ���� �� ���ϴ� ��ȣ�� ���� \n";
			cout << "\t2. ������ Ŭ������ ��� ������ ���� \n";
			cin >> k;

			if (cin.fail()) {
				cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // �߸��� �Է� ����
				cout << "�߸��� �Է��Դϴ�. ������ �Է��ϼ���\n";
				continue;
			}
			else if (n < 0 || n > 3) {
				cout << "�Է� ������ �߸��Ǿ����ϴ�. 1���� 2 ������ ������ �Է��ϼ���.\n";
				continue;
			}

			switch (k)
			{
				int n;
			case 1:
				cout << "\t �� ��° ������ �����ұ��? \n";
				cin >> n;

				sm.remove(n);
				break;
			case 2:
				cout << "\t� ������ �����ұ��?\n";
				cout << "\t1. �ﰢ��" << '\n';
				cout << "\t2. �簢��" << '\n';
				cout << "\t3. ��" << '\n';
				cout << "\t4. ��" << '\n';
				cout << "\t5. ����ü" << '\n';
				cin >> n;

				sm.remove_shape(n);
				break;

			}
			break;

		case 4:
			cout << "���α׷��� �����մϴ�" << '\n';
			return 0;
		}
	}

}