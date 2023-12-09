#include <iostream>
#include "Circle.h"
#include "Hexahedron.h"
#include "Rectangle.h"
#include "Star.h"
#include "Triangle.h"
#include "ShapeManager.h"
using namespace std;

//-------------------------------
ShapeManager::ShapeManager(int n)
//-------------------------------
{
	nShape = 0;							// ó�� ������� ���� �����ϴ� ���� ������ 0��
	capacity = n;						// �ִ� n���� ������ ���� �� ����
	shapes = new Shape * [capacity];
}

//---------------------------
ShapeManager::~ShapeManager()
//---------------------------
{
	// ��� ��ü�� ��Ȯ�ϰ� �����Ǵ��� �ݵ�� Ȯ���Ͽ��� �Ѵ�
	for (int i = 0; i < nShape; ++i) {
		delete shapes[i];
	}					
	delete[] shapes;
}

int ShapeManager::GetShapeNum()
{
	return nShape;
}

//-------------------------------
void ShapeManager::insert(Shape* a)
//-------------------------------
{
	shapes[nShape] = a;
	++nShape;
}

void ShapeManager::remove(int n)
{
	if (n < 0 || n > nShape) {
		std::cout << "�߸��� �ε����Դϴ� \n";
		return;
	}

	delete shapes[n];

	std::cout << n << "��° ������ �����մϴ� \n";
	for (int i = n; i < nShape; ++i) {
		shapes[i] = shapes[i + 1];
	}

	--nShape;
}

void ShapeManager::remove_shape(int n)
{
	switch (n)
	{	

	case 1:
		std::cout << "�ﰢ���� �����մϴ� \n";

		for (int i = 0; i < nShape; ) {
			if (dynamic_cast<Triangle*>(shapes[i])) {
				delete shapes[i];

				for (int j = i; j < nShape - 1; ++j) {
					shapes[j] = shapes[j + 1];
				}

				--nShape;
			}
			else {
				++i;
			}
		}
		
		break;

	case 2:
		std::cout << "�簢���� �����մϴ� \n";

		for (int i = 0; i < nShape; ) {
			if (dynamic_cast<Rectangle*>(shapes[i])) {
				delete shapes[i];

				for (int j = i; j < nShape - 1; ++j) {
					shapes[j] = shapes[j + 1];
				}

				--nShape;
			}
			else {
				++i;
			}
		}
		break;

	case 3:
		std::cout << "���� �����մϴ� \n";

		for (int i = 0; i < nShape; ) {
			if (dynamic_cast<Circle*>(shapes[i])) {
				delete shapes[i];

				for (int j = i; j < nShape - 1; ++j) {
					shapes[j] = shapes[j + 1];
				}

				--nShape;
			}
			else {
				++i;
			}
		}
		break;

	case 4:
		std::cout << "���� �����մϴ� \n";

		for (int i = 0; i < nShape; ) {
			if (dynamic_cast<Star*>(shapes[i])) {
				delete shapes[i];

				for (int j = i; j < nShape - 1; ++j) {
					shapes[j] = shapes[j + 1];
				}

				--nShape;
			}
			else {
				++i;
			}
		}
		break;

	case 5:
		std::cout << "����ü�� �����մϴ� \n";

		for (int i = 0; i < nShape; ) {
			if (dynamic_cast<Hexahedron*>(shapes[i])) {
				delete shapes[i];

				for (int j = i; j < nShape - 1; ++j) {
					shapes[j] = shapes[j + 1];
				}

				--nShape;
			}
			else {
				++i;
			}
		}
		break;

	}
}

//-----------------------------
void ShapeManager::draw() const
//-----------------------------
{
	cout << "-------------------------------------------------" << '\n';
	cout << "�����ϴ� ��� ������ �׸��ϴ�" << '\n';
	cout << "�ִ� " << capacity << "���� ������ ���� �� �ֽ��ϴ�" << '\n';
	cout << "��� " << nShape << "���� ������ �ֽ��ϴ�" << '\n';
	cout << "-------------------------------------------------" << '\n' << '\n';

	for (int i = 0; i < nShape; ++i) {
		cout << "[" << i << "] ";
		shapes[i]->draw();			// �������� �����ȴ�
	}
	cout << '\n';

	cout << "-------------------------------------------------" << '\n';
	cout << "�׸��⸦ ��Ĩ�ϴ�" << '\n';
	cout << "-------------------------------------------------" << '\n' << '\n';


}
