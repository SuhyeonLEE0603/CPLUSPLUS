// 2023. 10. 2 ��										(5�� 1��)
// 10�� 25��(8�� 2��) - �߰�����
//---------------------------------------------------------------------------
// ����(sort)
//---------------------------------------------------------------------------

#include <iostream>
#include <format>
#include <random>
#include "save.h"
using namespace std;

default_random_engine dre;
uniform_int_distribution uid{ 1, 999 };

// [����] int �� 1'000���� ������ �� �ִ� �迭�� ������
// �� int���� 1���� 999���� �� �� ���������� ������
// �迭�� ������������ �����϶�
// ��ü 1000�� ���� ȭ�鿡 ����϶�

//--------
int main()
//--------
{
	int num[1000];		// 4KB

	for (int i = 0; i < 1000; ++i) {
		num[i] = uid(dre);
	}

	// ���� - qsort
	for (int j = 0; j < 1000 - 1; ++j) {
		for (int i = 0; i < 1000 - 1; ++i) {
			if (num[i] > num[i + 1]) {
				int temp{ num[i] };
				num[i] = num[i + 1];
				num[i + 1] = temp;
			}
		}
	}

	// ���� �� ���
	for (int num : num) {
		cout << format("{:4d}",num);
	}
	cout << '\n';
	save("�ҽ�.cpp");
}
