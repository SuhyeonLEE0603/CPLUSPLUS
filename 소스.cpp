// 2023. 11. 29 수										(13주 2일)
//---------------------------------------------------------------------------
// class
// 2023. 12. 11 월(15주 1일) - 한학기 정리, 책 소개
// 2023. 12. 13 수(15주 2일) - 기말시험
//---------------------------------------------------------------------------
#include <iostream>
#include <random>
#include "save.h"
#include "STRING.h"
using namespace std;

// [상속 연습] 동물 개 새를 상속계층(hirearchy)으로 만들어라
// C++에서 다형성을 구현하는 핵심키워드 - virtual
// 어떤 클래스가 virtual 맴버를 만들면 자식 클래스의 같은 맴버는 자동으로 virtual으로 변환됨
// 전부 virtual, override을 명시적으로 붙여줘서 가독성을 높임
// final을 붙이면 더 이상 자식 클래스를 만들어도 override 금지

class Animal {
public:
	virtual void move() const {
		cout << "동물 - 움직인다" << endl;
	}
};

class Dog : public Animal {
public:
	virtual void move() const override {		// 조상의 맴버를 overriding 함
		cout << "개 - 달린다" << endl;
	}
};

class Bird : public Animal {
public:
	virtual void move() const override final {
		cout << "새 - 난다" << endl;
	}
};

// [문제] 동물 10마리를 관리하는 코드를 만든다
// 랜덤값에 따라 홀수면 Dog, 짝수면 Bird를 생성하라
// 모든 동물의 move()를 호출하여 다형성이 구현됨을 확인하라

default_random_engine dre;
uniform_int_distribution uid{ 0, 1 };

//--------
int main()
//--------
{
	Animal* animals[10];
	for (Animal*& p : animals) {
		if (uid(dre)) {
			p = new Dog;
		}
		else {
			p = new Bird;
		}
	}

	for (int i = 0; i < 10; ++i) {
		if (uid(dre)) {
			animals[i] = new Dog;
		}
		else {
			animals[i] = new Bird;
		}
	}

	for (int i = 0; i < 10; ++i) {
		animals[i]->move();
	}

	//save("소스.cpp");
}
