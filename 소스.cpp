// 2023. 10. 2 ��										(5�� 1��)
// 10�� 25��(8�� 2��) - �߰�����
//---------------------------------------------------------------------------
// ����(sort) - C��� ���̺귯�� �Լ� qsort
//---------------------------------------------------------------------------

#include <iostream>
#include <format>
#include <random>
#include "save.h"
using namespace std;

// [����] int �� �������� ������ �� �ִ� �迭�� ������
// �� int���� 1���� 99'9999���� �� �� ���������� ������
// �迭�� ������������ �����϶�
// �Ϻκ��� ����ؼ� ���ĵ� ���� Ȯ������

default_random_engine dre;
uniform_int_distribution uid{ 1, 99'9999 };
//--------
int main()
//--------
{
	const int NUM{ 1000 };
	int num[NUM];

	// &�� ���� �����Ϳ� ���� �����̴ϱ� ������ �״�� ����ϰ� ���� �� ����
	for (int& number : num) {
		number = uid(dre);
	}

	// ���� - qsort

	int ���Ĺ��(const void*,const void*);
	qsort(num, NUM, sizeof(int), ���Ĺ��);

	// ���� �� ���
	for (int num : num) {
		cout << format("{:8d}",num);
	}
	cout << '\n';
	save("�ҽ�.cpp");
}

int ���Ĺ��(const void* p, const void* q) {
	int a = *(int*)p;
	int b = *(int*)q;

	// ��������
	if (a > b) {
		return 1;
	}
	else if (a < b) {
		return -1;
	}

	return 0;

}
