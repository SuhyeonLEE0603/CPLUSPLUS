// 2023. 11. 15 ��										(11�� 2��)
//---------------------------------------------------------------------------
// class
// 2023. 12. 13 �⸻����
//---------------------------------------------------------------------------

#include <iostream>
#include <random>
#include <fstream>
#include "save.h"
#include "STRING.h"
using namespace std;

default_random_engine dre;
uniform_int_distribution uid{ 1, 100 };

int gn{ 0 };

class Dog {
private:
	string name;
	int age;

public:
	Dog(){			// �� �Լ��� �ڵ����� inlineȭ
		age = uid(dre);
		name = "���-" + to_string(++gn) + "ȣ";
	}

	friend ostream& operator<<(ostream& os, const Dog& dog) {
		os << "���� - " << dog.age << ", �̸� - " << dog.name;
		return os;
	}
};

//--------
int main()
//--------
{
	Dog dogs[20];		// �̸��� ���̴� ��������

	ofstream out{ "��20����.txt" };

	for (const Dog& dog : dogs) {
		out << dog << endl;
	}


	save("�ҽ�.cpp");
}
