// 2023. 11. 15 ��										(11�� 2��)
//---------------------------------------------------------------------------
// class
//---------------------------------------------------------------------------

#include <iostream>
#include "STRING.h"
#include <algorithm>
#include "save.h"
using namespace std;

void f(int);

void f(int n) {
	cout << "����" << n << "�� ���޹޾ҽ��ϴ�" << endl;
}

//--------
int main()
//--------
{
	(*f)(3);		// �Լ� �̸� ��ü�� �ּ��̱� ������ �̷��� �ڵ� ����

	//auto x = f;

	//x(100);

	// int a[10]
	
	void (*x)(int) = f;		// �Լ��� �Լ������ͷ� ���尡��

	cout << sizeof(x) << endl;
	cout << typeid(x).name() << endl;

	save("�ҽ�.cpp");
}
