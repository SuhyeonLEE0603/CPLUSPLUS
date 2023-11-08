// 2023. 11. 8 수										(10주 2일)
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

	STRING& operator=(const STRING& other) {
		if (this == &other) {
			return *this;
		}

		delete[] p;
		size = other.size;
		p = new char[size];
		memcpy(p, other.p, size);

		cout << "STRING 복사할당연산자 - " << size << ", 번지:" << (void*)p << endl;
		return *this;
	}

	// C++11에서 도입한 이동생성과 이동할당을 코딩
	// && - r-vallue reference(이동문법지원과 완벽전달(perfect forwading))
	STRING(STRING&& other) : size{other.size} {
		p = other.p;

		// 만료(expired)될 객체 other를 초기화한다
		other.size = 0;
		other.p = nullptr;

		cout << "STRING 이동생성 - " << size << ", 번지:" << (void*)p << endl;

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

		cout << "STRING 이동할당 - " << size << ", 번지:" << (void*)p << endl;
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
	STRING s{ "글자를 메모리에 저장하고 관리한다" };
	STRING t{ "나도 문자열을 관리하는 중" };

	cout << "s -";
	s.show();
	cout << "t -";
	t.show();

	t = move(s);		// move assignment(special 함수)가 호출되는 상황
						// move sementic에 미리 함수가 있으면 그 함수를 호출하고
						// 함수가 없다면 복사할당연사자를 대신 호출한다

	cout << "이미 만들어진 객체 T가 S의 자원을 이동하여 가져온다" << endl;

	cout << "s -";
	s.show();
	cout << "t -";
	t.show();

	save("소스.cpp");
}