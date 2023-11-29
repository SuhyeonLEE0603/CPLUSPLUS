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

// �����ð� - ���������ý���
// 

random_device rd;
default_random_engine dre{ rd() };
uniform_int_distribution uid{ 0, 1 };

//--------
int main()
//--------
{
	save("�ҽ�.cpp");

	while (true) {
		cout << "�� ������ ���ϳ���? ";
		int num;
		cin >> num;		// run-time�� ����

		Animal** animals;
		animals= new Animal * [num];		// run-time�� num�� �����Ǳ� ������ range for ���� ����� �� ����

		for (int i = 0; i < num; ++i) {
			if (uid(dre)) {
				animals[i] = new Dog;
			}
			else {
				animals[i] = new Bird;
			}
		}

		for (int i = 0; i < num; ++i) {
			animals[i]->move();
		}

		for (int i = 0; i < num; ++i) {
			delete[] animals[i];
		}

		delete[] animals;
	}
}
