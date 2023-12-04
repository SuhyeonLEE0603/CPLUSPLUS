// 2023. 12. 4 ��										(14�� 1��)
//---------------------------------------------------------------------------
// class
// 2023. 12. 11 ��(15�� 1��) - ���б� ����, å �Ұ�
// 2023. 12. 13 ��(15�� 2��) - �⸻����
// 2023. 12. 18 �� - �����Խ�
//---------------------------------------------------------------------------
#include <iostream>
#include "save.h"
#include "STRING.h"
using namespace std;

// C++ ���ø�
// �� �ʿ��Ѱ�? - C++ ���� �Լ� �����ε��� �����ϴ�. (���������� Ÿ�Ը� �ٸ��ٸ�)
//		���� ����� �Լ��� �ڷ����� �ٲ� ��� ������ �Ѵ�. -> ��ǻ�Ͱ� ��� �ϵ���
//		-> ���ø� (�ҽ� �ڵ带 �����Ϸ��� ������ �� �ִ� Ʋ)
// ���� ������?
// ��¥ ���� ���� �����ΰ�?

// [����] main�� �������� ���� �ǵ���� ����ǰ� �� �ּ���

class Dog {
	int num;
public:
	Dog(int n) : num{ n } {

	}

	friend ostream& operator<<(ostream& os, const Dog& a) {
		return os << a.num;
	}

};

void change(int&, int&);
void change(string&, string&);		// function overloading
void change(Dog&, Dog&);

//--------
int main()
//--------
{
	{
		int a{ 1 }, b{ 2 };
		change(a, b);
		cout << a << ", " << b << endl;
	}

	{
		string a{ "2023" }, b{ "1204" };
		change(a, b);
		cout << a << ", " << b << endl;
	}

	{
		Dog a{ 1 }, b{ 2 };
		change(a, b);
		cout << a << ", " << b << endl;
	}
	save("�ҽ�.cpp");

}

void change(int& a, int& b)
{
	int temp{ a };
	a = b;
	b = temp;
}

void change(string& a, string& b) 
{
	string temp{ a };
	a = b;
	b = temp;
}

void change(Dog& a, Dog& b) 
{
	Dog temp{ a };
	a = b;
	b = temp;
}