// 2023. 11. 15 ��										(11�� 2��)
//---------------------------------------------------------------------------
// class
//---------------------------------------------------------------------------
#include <iostream>
#include "STRING.h"
#include "save.h"
using namespace std;

class INT {
	int n;

public:
	INT() {}					// �����ڸ� �ϳ��� �ڵ��ߴٸ� special �Լ��� default ctor�� �ڵ���
	INT(int i) : n{ i } {
	}

	INT& operator++() {			// pre-increment
		++n;
		return *this;
	}

	INT operator++(int) {		// post-increment
		INT temp{ *this };
		++(*this);
		return temp;
	}
	
	friend ostream& operator<<(ostream& os, INT i) {
		return os << i.n;
	}
};

//--------
int main()
//--------
{
	INT n{ 100 };

	INT k = ++n;
	INT x = n++;		// INT.operator++(int);
	
	cout << k << endl;
	cout << x << endl;

	save("�ҽ�.cpp");
}
