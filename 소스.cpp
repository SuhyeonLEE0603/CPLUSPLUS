// 2023. 9. 18 ��										(3�� 1��)
// �̹� �� ������ 9/20 - ���÷� ����(3�� 2��)�� ��ü ��
//---------------------------------------------------------------------------
// ���� ���� int�� �ִ� - ��� �����Ұǰ�? � �۾��� �ϰ� �ͳ�?
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
	int numbers[1000];

	for (int i = 0; i < 1000; ++i) {
		numbers[i] = uid(dre);
	}

	for (int num : numbers) {
		cout << format("{:4d}", num);
	}
	cout << endl;

	int max = numeric_limits<int>::min();
	// [����] ���ϴ� ���� �ϳ� �Է¹޾ƶ�
	// �� ���� numbers�� �ִ� �� ���� �� ã�� ����϶�

	int x;
	while(true) {
		cout << "���ϴ� ���� �Է��Ͻÿ�" << endl;
		cin >> x;

		bool flag{ false };
		for (int num : numbers) {
			if (num == x) {
				flag = true;
				cout << "�ش� ���� ã�ҽ��ϴ�" << endl;
				break;
			}
		}

		if (not flag) {
			cout << "�ش� ���� �� ã�ҽ��ϴ�" << endl;
		}
	}
	
	//save("�ҽ�.cpp");
}
