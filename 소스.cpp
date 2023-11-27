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

// ���(Inheritance)
// 1. �ڵ� ����
// 2. ������ ���� - One interface, multiple method(behavior)

// ��� ���� ���� �� ���� ��Ӱ���(hierarchy)���� ����� ����

class Animal {
	int age{ 0 };

public:
	Animal() {
		cout << "Animal�� �⺻������" << endl;
	}

	Animal(int n) : age{ n } {
		cout << "Animal�� ������" << endl;

	}

	~Animal() {
		cout << "Animal�� �Ҹ���" << endl;
	}
	void move() const {
		cout << "���� �����δ� - " << age << endl;
	}

};

class Dog : public Animal {
	bool bite{ false };

public:
	Dog() {
		cout << "Dog�� �⺻������" << endl;
	}

	Dog(int n) : Animal(n) {
		cout << "Dog�� ������" << endl;

	}

	~Dog() {
		cout << "Dog�� �Ҹ���" << endl;
	}
};

//--------
int main()
//--------
{
	// �θ�� �ڽİ��� ����
	Animal a;
	Dog d;

	// a = d;		// ������ ���� - Object slicing
	// d = a;		// ���� �Ұ� -> ���� �޸𸮸� ū �޸𸮷� ���� ����� ����

	// �׷��� �̿� ���� ��ü�� ���� �����ϴ� ������ �ǿ뼺�� ����

	Animal* pa = &a;
	Dog* pd = &d;

	// ������ *�� ������ �ڽ� ��ü�� pointing �� �� ���� - dynamic_casting
	pa = pd;		// up-casting�� ������ ����, ��Ӱ������� ȭ��ǥ ����� ����
	//pd = pa;		// down-casting -> ���Ǻη� ��������

	save("�ҽ�.cpp");
}
