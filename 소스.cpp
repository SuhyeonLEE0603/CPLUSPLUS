// 2023. 10. 2 ��										(5�� 1��)
// 10�� 25��(8�� 2��) - �߰�����
//---------------------------------------------------------------------------
// change �Լ�
//---------------------------------------------------------------------------
// ����
//---------------------------------------------------------------------------

#include <iostream>
#include "save.h"
using namespace std;

void change(int&, int&);			// ����� ���Ǹ� �ݵ�� ��������

//--------
int main()
//--------
{
	const int NUM = 10;
	int num[NUM]{ 10, 3, 8, 6, 1, 5, 2, 7, 4, 9 };

	// [����] num�� �ִ� �� �� ���� ū ���� ���������� �Űܶ�
	
	// buble sort
	for (int k = 1; k < NUM - 2; ++k) {
		for (int i = 0; i < NUM - k; ++i) {
			if (num[i] > num[i + 1]) {
				change(num[i], num[i + 1]);
			}
		}
	}

	for (int num : num) {
		cout << num << " ";
	}
	cout << endl;

	save("�ҽ�.cpp");
}

void change(int& p, int& q) {
	int temp{ p };
	p = q;
	q = temp;
}
