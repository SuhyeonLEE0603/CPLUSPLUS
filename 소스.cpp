// 2023. 9. 25 ��										(4�� 1��)
// 10�� 2�� (5�� 1��) - ������ ����
// 10�� 25��(6�� 2��) - �߰�����
//---------------------------------------------------------------------------
// ������ �޸� - ��������, ��������, �����Ҵ� ����
//---------------------------------------------------------------------------
#include <iostream>
#include "save.h"
using namespace std;

int n;				// DATA - global variable

//--------
int main()
//--------
{
	int n;			// STACK - local variable
					// DATA, STACK�� n�̶� �̸����� �ּҰ��� �������Ͽ� �� ���� ���� �ٷ�

	new int;		// FREE Store - dynamically allocated variable -> DATA�� STACK�̶� �ٸ��� �ּҰ��� ������ �ٷ�
	// -> system(Operating system)�� ��û
	save("�ҽ�.cpp");
}