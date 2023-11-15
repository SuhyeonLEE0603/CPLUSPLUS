// 2023. 11. 15 목										(11주 2일)
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
	INT() {}					// 생성자를 하나라도 코딩했다면 special 함수인 default ctor를 코딩함
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

	save("소스.cpp");
}
