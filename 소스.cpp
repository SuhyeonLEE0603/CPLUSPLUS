// 2023. 11. 8 ��										(10�� 2��)
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

	STRING& operator=(const STRING& other) {
		if (this == &other) {
			return *this;
		}

		delete[] p;
		size = other.size;
		p = new char[size];
		memcpy(p, other.p, size);

		cout << "STRING �����Ҵ翬���� - " << size << ", ����:" << (void*)p << endl;
		return *this;
	}

	// C++11���� ������ �̵������� �̵��Ҵ��� �ڵ�
	// && - r-vallue reference(�̵����������� �Ϻ�����(perfect forwading))
	STRING(STRING&& other) : size{other.size} {
		p = other.p;

		// ����(expired)�� ��ü other�� �ʱ�ȭ�Ѵ�
		other.size = 0;
		other.p = nullptr;

		cout << "STRING �̵����� - " << size << ", ����:" << (void*)p << endl;

	}

	// 2023. 11. 8 move assignment operator
	STRING& operator=(STRING&& other) {
		if (this == &other) {
			return *this;
		}
		delete[] p;

		p = other.p;
		other.p = nullptr;
		other.size = 0;

		cout << "STRING �̵��Ҵ� - " << size << ", ����:" << (void*)p << endl;
		return *this;

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
	STRING s{ "���ڸ� �޸𸮿� �����ϰ� �����Ѵ�" };
	STRING t{ "���� ���ڿ��� �����ϴ� ��" };

	cout << "s -";
	s.show();
	cout << "t -";
	t.show();

	t = move(s);		// move assignment(special �Լ�)�� ȣ��Ǵ� ��Ȳ
						// move sementic�� �̸� �Լ��� ������ �� �Լ��� ȣ���ϰ�
						// �Լ��� ���ٸ� �����Ҵ翬���ڸ� ��� ȣ���Ѵ�

	cout << "�̹� ������� ��ü T�� S�� �ڿ��� �̵��Ͽ� �����´�" << endl;

	cout << "s -";
	s.show();
	cout << "t -";
	t.show();

	save("�ҽ�.cpp");
}