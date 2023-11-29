// 2023. 11. 29 ��										(13�� 2��)
//---------------------------------------------------------------------------
// class
// 2023. 12. 11 ��(15�� 1��) - ���б� ����, å �Ұ�
// 2023. 12. 13 ��(15�� 2��) - �⸻����
//---------------------------------------------------------------------------
#include <iostream>
#include <random>
#include "save.h"
#include "STRING.h"
using namespace std;

// [��� ����] ���� �� ���� ��Ӱ���(hirearchy)���� ������
// C++���� �������� �����ϴ� �ٽ�Ű���� - virtual
// � Ŭ������ virtual �ɹ��� ����� �ڽ� Ŭ������ ���� �ɹ��� �ڵ����� virtual���� ��ȯ��
// ���� virtual, override�� ��������� �ٿ��༭ �������� ����
// final�� ���̸� �� �̻� �ڽ� Ŭ������ ���� override ����

class Animal {
public:
	virtual void move() const {
		cout << "���� - �����δ�" << endl;
	}
};

class Dog : public Animal {
public:
	virtual void move() const override {		// ������ �ɹ��� overriding ��
		cout << "�� - �޸���" << endl;
	}
};

class Bird : public Animal {
public:
	virtual void move() const override final {
		cout << "�� - ����" << endl;
	}
};

// [����] ���� 10������ �����ϴ� �ڵ带 �����
// �������� ���� Ȧ���� Dog, ¦���� Bird�� �����϶�
// ��� ������ move()�� ȣ���Ͽ� �������� �������� Ȯ���϶�

default_random_engine dre;
uniform_int_distribution uid{ 0, 1 };

//--------
int main()
//--------
{
	Animal* animals[10];
	for (Animal*& p : animals) {
		if (uid(dre)) {
			p = new Dog;
		}
		else {
			p = new Bird;
		}
	}

	for (int i = 0; i < 10; ++i) {
		if (uid(dre)) {
			animals[i] = new Dog;
		}
		else {
			animals[i] = new Bird;
		}
	}

	for (int i = 0; i < 10; ++i) {
		animals[i]->move();
	}

	//save("�ҽ�.cpp");
}
