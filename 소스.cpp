// 2023. 11. 22 수										(12주 2일)
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

	}

	~Dog() {
		cout << "Dog의 소멸자" << endl;
	}
};

//--------
int main()
//--------
{
	Dog dog{ 10 };
	
	// [문제 1] dog의 메모리를 관찰하자
	cout << "Dog의 메모리 크기 : " << sizeof(dog) << endl;

	// [문제 2] 생성자와 소멸자의 호출을 관찰하자
	dog.move();

	// [문제 3] Dog의 나이를 설정하자

	save("소스.cpp");
}
