#include <iostream>
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

//-------------------------------
void ShapeManager::insert(Shape* a)
//-------------------------------
{
	shapes[nShape] = a;
	nShape++;
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
