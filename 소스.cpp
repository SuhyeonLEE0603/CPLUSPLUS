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
	STRING s{ "안녕? 난 C의 char*를 완벽하게 대체하는 객체야!" };
	
	s.show();
	//save("소스.cpp");
}