// 2023. 9. 13 ��										(2�� 2��)
// ���� �� ������ 9/20 - ���÷� ����(3�� 2��)�� ��ü ��
//---------------------------------------------------------------------------
// ���� ������ ����
//---------------------------------------------------------------------------

#include <iostream>
#include <random>			// �������� ������ ����Ϸ���
#include <format>
#include <algorithm>
#include "save.h"
using namespace std;

default_random_engine dre;				// �������� �����ϴ� ����
uniform_int_distribution uid{ 1, 999 };

//--------
int main()
//--------
{
	int numbers[100];

	for (int i = 0; i < 100; ++i) {
		numbers[i] = uid(dre);
	}

	for (int num : numbers) {
		cout << format("{:4d}", num);
	}
	cout << endl;

	int max = numeric_limits<int>::min();
	// [����] ���� ū ���� ã�� ȭ�鿡 �Է��Ͻÿ�
	for (int num : numbers) {
		if (num > max) {
			max = num;
		}
	}
	cout << "���� ū �� - " << max << endl;

	save("�ҽ�.cpp");
}
