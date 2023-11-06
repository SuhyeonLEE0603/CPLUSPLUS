// 2023. 11. 6 월										(10주 1일)
//---------------------------------------------------------------------------
// class
//---------------------------------------------------------------------------
// [과제] 나만의 자료형을 많이 만들고 반복 학습
//---------------------------------------------------------------------------

#include <iostream>
#include "save.h"

using namespace std;

// [문제] 나는 Memory Monster다. 생성시에 int 값 num을 전달하면
// Free store에 num개의 int를 저장할 공간을 확보하고 그 값을 모두 num으로 채운다.
// 다음 코드가 문제없이 실행되도록 코딩하자

class MemoryMonster {
	int num;
	int* p;
public:
	
	MemoryMonster(int n) : num{ n } {
		p = new int[num];
		for (int i = 0; i < num; ++i) {
			p[i] = num;
		}
		cout << "MemoryMonster 생성 - " << num << endl;
	}

	~MemoryMonster() {
		cout << "MemoryMonster 소멸 - " << num << endl;
		delete[] p;
	}

	MemoryMonster(const MemoryMonster& other) : num{ other.num } {
		p = new int[num];
		memcpy(p, other.p, sizeof(int) * num);

		cout << "메몬을 복사함 - " << num << endl;
	}

	// 복사생성자를 코딩했다면 반드시 이와 짝이 되는 복사할당연산자(copy assignment)를 코딩해야만 한다
	MemoryMonster& operator=(const MemoryMonster& other) {
		delete[] p;		// 내가 관리하는 자원을 해제
		num = other.num;
		p = new int[num];
		memcpy(p, other.p, sizeof(int) * num);

		cout << "메몬을 복사할당함 - " << num << endl;

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

	save("소스.cpp");
}