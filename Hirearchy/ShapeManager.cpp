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
	nShape = 0;							// 처음 만들어질 때는 관리하는 도형 갯수가 0임
	capacity = n;						// 최대 n개의 도형을 담을 수 있음
	shapes = new Shape * [capacity];
}

//---------------------------
ShapeManager::~ShapeManager()
//---------------------------
{
	// 모든 객체가 정확하게 삭제되는지 반드시 확인하여야 한다
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
		std::cout << "잘못된 인덱스입니다 \n";
		return;
	}

	delete shapes[n];

	std::cout << n << "번째 도형을 삭제합니다 \n";
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
		std::cout << "삼각형을 삭제합니다 \n";

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
		std::cout << "사각형을 삭제합니다 \n";

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
		std::cout << "원을 삭제합니다 \n";

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
		std::cout << "별을 삭제합니다 \n";

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
		std::cout << "육면체를 삭제합니다 \n";

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
	cout << "관리하는 모든 도형을 그립니다" << '\n';
	cout << "최대 " << capacity << "개의 도형을 담을 수 있습니다" << '\n';
	cout << "모두 " << nShape << "개의 도형이 있습니다" << '\n';
	cout << "-------------------------------------------------" << '\n' << '\n';

	for (int i = 0; i < nShape; ++i) {
		cout << "[" << i << "] ";
		shapes[i]->draw();			// 다형성이 구현된다
	}
	cout << '\n';

	cout << "-------------------------------------------------" << '\n';
	cout << "그리기를 마칩니다" << '\n';
	cout << "-------------------------------------------------" << '\n' << '\n';


}
