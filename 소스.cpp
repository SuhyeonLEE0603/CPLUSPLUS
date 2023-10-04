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
// �迭�� ��������(descending order)���� �����϶�
// ��ü 1000�� ���� ȭ�鿡 ����϶�

//--------
int main()
//--------
{
	const int NUM{ 1000 };
	int num[NUM];		

	for (int i = 0; i < NUM; ++i) {
		num[i] = uid(dre);
	}

	// ���� - bubble sort
	for (int j = 0; j < NUM - 1; ++j) {
		for (int i = 0; i < NUM - 1; ++i) {
			if (num[i] < num[i + 1]) {
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
