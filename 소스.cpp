// 2023. 11. 6 월										(10주 1일)
//---------------------------------------------------------------------------
// class
//---------------------------------------------------------------------------
// [과제] 나만의 자료형을 많이 만들고 반복 학습
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

		cout << "STRING(const char*) - " << size << ", 번지:" << (void*)p << endl;
	}
	
	~STRING() {
		cout << "~STRING() - " << size << ", 번지:" << (void*)p << endl;
		delete[] p;
	}

	STRING(const STRING& other) : size{ other.size } {
		p = new char[size];

		// 깊은 복사
		memcpy(p, other.p, size);
		cout << "STRING 복사생성 - " << size << ", 번지:" << (void*)p << endl;
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
	// STRING의 생성자는 const char* 로 전달하고 처리하자. string 사용하지 말 것
	STRING s{ "난 STRING이야!" };
	STRING t = s;

	t.show();
	s.show();
	save("소스.cpp");
}