// 2023. 11. 22 ��										(12�� 2��)
//---------------------------------------------------------------------------
// class
// 2023. 12. 11 ��(15�� 1��) - ���б� ����, å �Ұ�
// 2023. 12. 13 ��(15�� 2��) - �⸻����
//---------------------------------------------------------------------------

#include <iostream>
#include <random>
#include <fstream>
#include "save.h"
#include "STRING.h"
using namespace std;

// [����] "��20����.txt" ���� class Dog ��ü 20���� ������ ��ϵǾ� �ִ�
// class Dog{
//		int age;
//		string name;
// �ɹ� ������ ������
//
//		friend ostream& operator<<(ostream& os, const Dog& dog){
//		return os << dog.age << "\t" << dog.name << "\t";
//		}
// };
// ������ << �� �����ε��Ͽ� ���Ͽ� ����Ͽ���
//
// 20���� ������ �о� ���̿����������� �����Ͽ� ����϶�

class Dog {
	int age;
	string name;

public:

	// special �Լ��� �ڵ��� ������ ���� ����

	int getAge() const {
		return age;
	}

	friend ostream& operator<<(ostream& os, const Dog& dog) {
		return os << dog.age << "\t" << dog.name << "\t";
	}
	friend istream& operator>>(istream& is, Dog& dog) {
		return is >> dog.age >> dog.name;
	}

};

//--------
int main()
//--------
{
	ifstream in{ "��20����.txt" };
	if (!in) {
		cout << "������ ���� ���ߴ�" << endl;
		return 0;
	}

	Dog dogs[20];
	
	for (int i = 0; i < 20; ++i) {
		in >> dogs[i];
	}

	qsort(dogs, sizeof(dogs) / sizeof(Dog), sizeof(Dog), [](const void* a, const void* b) {
		return ((Dog*)a)->getAge() - ((Dog*)b)->getAge();
		});

	cout << "���� (ascending order)������ ������ ���" << endl;

	for (const Dog& dog : dogs) {		// const & �� ���ϰ�
		cout << dog << endl;
	}

	save("�ҽ�.cpp");
}
