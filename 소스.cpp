// 2023. 11. 22 ��										(12�� 2��)
//---------------------------------------------------------------------------
// class
// 2023. 12. 11 ��(15�� 1��) - ���б� ����, å �Ұ�
// 2023. 12. 13 ��(15�� 2��) - �⸻����
//---------------------------------------------------------------------------
#include <iostream>
#include "save.h"
#include "STRING.h"
using namespace std;

class X {
private:
	// data member;
public:
	// function member;
	// 1. special member;
	// 2. opreator overloading;
	// 3. getter/setter interface;
	// 4. friend (>>, <<)

	// �ڿ��� ����(RAII)
	// �Ҹ��ڿ��� ������ �������
	// smart*�� ��������� special function�� �ݵ�� �ڵ��ؾ���
};

//--------
int main()
//--------
{

	// X a;			// a�� instancing, Data(������ ���ǽ�)
	// {X  a;}		// Stack
	// X* a = new X;	// Free Store
	
	save("�ҽ�.cpp");
}
