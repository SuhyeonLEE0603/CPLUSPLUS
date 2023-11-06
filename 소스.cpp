// 2023. 11. 6 ��										(10�� 1��)
//---------------------------------------------------------------------------
// class
//---------------------------------------------------------------------------
// [����] ������ �ڷ����� ���� ����� �ݺ� �н�
//---------------------------------------------------------------------------

#include <iostream>
#include <string>
#include "save.h"

using namespace std;
class STRING {
	size_t size;
	char* p;
public:

	STRING(const char* s) : size{strlen(s)} {
		p = new char[size];
		memcpy(p, s, size);

		cout << "STRING(const char*) - " << size << ", ����:" << (void*)p << endl;
	}
	
	~STRING() {
		cout << "~STRING() - " << size << ", ����:" << (void*)p << endl;
		delete[] p;
	}

	STRING(const STRING& other) : size{ other.size } {
		p = new char[size];

		// ���� ����
		memcpy(p, other.p, size);
		cout << "STRING ������� - " << size << ", ����:" << (void*)p << endl;
	}

	void show() {
		for (int i = 0; i < size; ++i) {
			cout << p[i];
		}

		cout << endl;
	}
};

//--------
int main()
//--------
{	
	// STRING�� �����ڴ� const char* �� �����ϰ� ó������. string ������� �� ��
	STRING s{ "�� STRING�̾�!" };
	STRING t = s;

	t.show();
	s.show();
	save("�ҽ�.cpp");
}