// 2023. 11. 27 ��										(13�� 1��)
//---------------------------------------------------------------------------
// class
// 2023. 12. 11 ��(15�� 1��) - ���б� ����, å �Ұ�
// 2023. 12. 13 ��(15�� 2��) - �⸻����
//---------------------------------------------------------------------------
#include <iostream>
#include "save.h"
#include "STRING.h"
using namespace std;

// [��� ����] ���� �� ���� ��Ӱ���(hirearchy)���� ������
// C++���� �������� �����ϴ� �ٽ�Ű���� - virtual
// � Ŭ������ virtual �ɹ��� ����� �ڽ� Ŭ������ ���� �ɹ��� �ڵ����� virtual���� ��ȯ��
// ���� virtual, override�� ��������� �ٿ��༭ �������� ����
// final�� ���̸� �� �̻� �ڽ� Ŭ������ ���� override ����

class Animal {
	int age;
public:
	virtual void move() const {
		cout << "���� - �����δ�" << endl;
	}
};

class Dog : public Animal{
	bool bite;
public:
	virtual void move() const override {		// ������ �ɹ��� overriding ��
		cout << "�� - �޸���" << endl;
	}
};

class Bird : public Animal {
	long long fly;
public:
	virtual void move() const override final {
		cout << "�� - ����" << endl;
	}
};

//--------
int main()
//--------
{
	// �������̶�� �������� �����Ϸ��� �޸𸮸� �� ����Ѵ�
	// �ٽ� Ű����� virtual

	cout << "virtual ����� �ִ� Dog�� ũ�� - " << sizeof(Dog) << endl;

	Dog d;
	Bird b;

	Animal* p = &d;
	p->move();

	p = &b;
	p->move();

	save("�ҽ�.cpp");
}
