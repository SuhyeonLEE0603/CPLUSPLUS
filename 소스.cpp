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

// 다음시간 - 동적관리시스템
// 

random_device rd;
default_random_engine dre{ rd() };
uniform_int_distribution uid{ 0, 1 };

//--------
int main()
//--------
{
	save("소스.cpp");

	while (true) {
		cout << "몇 마리를 원하나요? ";
		int num;
		cin >> num;		// run-time에 결정

		Animal** animals;
		animals= new Animal * [num];		// run-time에 num이 결정되기 때문에 range for 문은 사용할 수 없음

		for (int i = 0; i < num; ++i) {
			if (uid(dre)) {
				animals[i] = new Dog;
			}
			else {
				animals[i] = new Bird;
			}
		}

		for (int i = 0; i < num; ++i) {
			animals[i]->move();
		}

		for (int i = 0; i < num; ++i) {
			delete[] animals[i];
		}

		delete[] animals;
	}
}
