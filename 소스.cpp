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
	}

	void show() {
		cout << "Monster - " << num << endl;
	}

	~MemoryMonster() {
		delete[] p;
	}
};

//--------
int main()
//--------
{
	MemoryMonster mon{ 123 };

	mon.show();		// ȭ�鿡 "Monster - 123" �̶�� ����Ѵ�

	//save("�ҽ�.cpp");
}