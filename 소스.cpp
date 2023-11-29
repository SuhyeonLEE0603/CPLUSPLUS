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


// Animal은 모든 동물의 공통점을 표현한 abstract 클래스가 되는 것이 바람직함
// 어떤 클래스가 한 개 이상의 순수가상함수(pure virtual function)가 있다면
// 그 클래스는 추상 클래스가 되고 객체를 만들 수 없게 됨
// Pure virtual function은 함수의 몸체가 없는 함수임
class Animal {
	int a;
public:
	virtual void move() const = 0;		// move는 function body가 없는 순수가상함수 -> (함수 = 0;)으로 표현함
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
// [문제] 동물을 관리하는 코드를 만든다
// 몇 마리를 관리할 지는 사용자 입력에 따른다
// 랜덤값에 따라 홀수면 Dog, 짝수면 Bird를 생성하라
// 모든 동물의 move()를 호출하여 다형성이 구현됨을 확인하라
// 이 과정이 영원히 반복시행 되도록 관리하라
// Bird인 경우에만 move()를 호출하고 싶다

// 다음시간 - 동적관리예제 abstract, pure virtual
// dyanmic_cast 까지

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

		// 원래 Bird인 경우에만 move()
		// RTTI(Real_Time Type Identification)

		for (int i = 0; i < num; ++i) {
			if (dynamic_cast<Bird*>(animals[i]) != nullptr) {
				animals[i]->move();
			}
		}

		for (int i = 0; i < num; ++i) {
			delete[] animals[i];
		}

		delete[] animals;
	}
}
