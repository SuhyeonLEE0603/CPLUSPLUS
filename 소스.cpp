// 2023. 11. 27 월										(13주 1일)
//---------------------------------------------------------------------------
// class
// 2023. 12. 11 월(15주 1일) - 한학기 정리, 책 소개
// 2023. 12. 13 수(15주 2일) - 기말시험
//---------------------------------------------------------------------------
#include <iostream>
#include "save.h"
#include "STRING.h"
using namespace std;

// 상속(Inheritance)
// 1. 코드 재사용
// 2. 다형성 구현 - One interface, multiple method(behavior)

// 상속 연습 동물 개 새를 상속계층(hierarchy)으로 만들어 본다

class Animal {
	int age{ 0 };

public:
	Animal() {
		cout << "Animal의 기본생성자" << endl;
	}

	Animal(int n) : age{ n } {
		cout << "Animal의 생성자" << endl;

	}

	~Animal() {
		cout << "Animal의 소멸자" << endl;
	}
	void move() const {
		cout << "동물 움직인다 - " << age << endl;
	}

};

class Dog : public Animal {
	bool bite{ false };

public:
	Dog() {
		cout << "Dog의 기본생성자" << endl;
	}

	Dog(int n) : Animal(n) {
		cout << "Dog의 생성자" << endl;

	}

	~Dog() {
		cout << "Dog의 소멸자" << endl;
	}
};

//--------
int main()
//--------
{
	// 부모와 자식간의 관계
	Animal a;
	Dog d;

	// a = d;		// 언제나 성립 - Object slicing
	// d = a;		// 성립 불가 -> 작은 메모리를 큰 메모리로 만들 방법은 없음

	// 그런데 이와 같이 객체를 직접 대입하는 문장은 실용성이 없음

	Animal* pa = &a;
	Dog* pd = &d;

	// 조상의 *는 언제나 자식 객체를 pointing 할 수 있음 - dynamic_casting
	pa = pd;		// up-casting은 언제나 성립, 상속계층도의 화살표 방향과 같음
	//pd = pa;		// down-casting -> 조건부로 성립가능

	save("소스.cpp");
}
