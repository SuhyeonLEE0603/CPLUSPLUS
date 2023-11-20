// 2023. 11. 15 ��										(11�� 2��)
//---------------------------------------------------------------------------
// class
// 2023. 12. 13 �⸻����
//---------------------------------------------------------------------------

#include <iostream>
#include <algorithm>
#include "save.h"
#include "STRING.h"
using namespace std;

// ȣ���� ��(callable) �ִ� ���� �Լ����� �ƴϴ�
// 1. �Լ�
// 2. �Լ��� ����Ű�� �����͸� ȣ���� �� �ִ�
// 3. () �����ڸ� �����ε��� ��ü�� ȣ���� �� �ִ� - function object

// Callable Type - ȣ�Ⱑ���� Ÿ��

// Dog�� ()�����ڸ� �����ε� - () - function call operator

//--------
int main()
//--------
{
	int a[]{ 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
	
	class Dog {
	public:
		int operator()(int a, int b) {
			return a < b;
		}
	};

	Dog dog;

	// C++���� ����
	sort(begin(a), end(a), dog);

	for (int i : a) {
		cout << i << " ";
	}
	cout << endl;

	save("�ҽ�.cpp");
}
