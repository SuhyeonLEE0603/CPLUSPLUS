// 2023. 11. 6 ��										(10�� 1��)
//---------------------------------------------------------------------------
// class
//---------------------------------------------------------------------------
// [����] ������ �ڷ����� ���� ����� �ݺ� �н�
//---------------------------------------------------------------------------

#include <iostream>
#include "save.h"

using namespace std;

// [����] ���� Memory Monster��. �����ÿ� int �� num�� �����ϸ�
// Free store�� num���� int�� ������ ������ Ȯ���ϰ� �� ���� ��� num���� ä���.
// ���� �ڵ尡 �������� ����ǵ��� �ڵ�����

class MemoryMonster {
	int num;
	int* p;
public:
	
	MemoryMonster(int n) : num{ n } {
		p = new int[num];
		for (int i = 0; i < num; ++i) {
			p[i] = num;
		}
		cout << "MemoryMonster ���� - " << num << endl;
	}

	~MemoryMonster() {
		cout << "MemoryMonster �Ҹ� - " << num << endl;
		delete[] p;
	}

	MemoryMonster(const MemoryMonster& other) : num{ other.num } {
		p = new int[num];
		memcpy(p, other.p, sizeof(int) * num);

		cout << "�޸��� ������ - " << num << endl;
	}

	// ��������ڸ� �ڵ��ߴٸ� �ݵ�� �̿� ¦�� �Ǵ� �����Ҵ翬����(copy assignment)�� �ڵ��ؾ߸� �Ѵ�
	MemoryMonster& operator=(const MemoryMonster& other) {
		delete[] p;		// ���� �����ϴ� �ڿ��� ����
		num = other.num;
		p = new int[num];
		memcpy(p, other.p, sizeof(int) * num);

		cout << "�޸��� �����Ҵ��� - " << num << endl;

		return *this;
	}
	void show() {
		cout << "Monster - " << num << endl;
	}


};

//--------
int main()
//--------
{
	MemoryMonster a{ 100 };
	MemoryMonster b{ 500 };

	b = a;			// copy assignment -> operator=()

	save("�ҽ�.cpp");
}