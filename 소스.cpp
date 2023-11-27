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

// [상속 연습] 동물 개 새를 상속계층(hirearchy)으로 만들어라
// C++에서 다형성을 구현하는 핵심키워드 - virtual
// 어떤 클래스가 virtual 맴버를 만들면 자식 클래스의 같은 맴버는 자동으로 virtual으로 변환됨
// 전부 virtual, override을 명시적으로 붙여줘서 가독성을 높임
// final을 붙이면 더 이상 자식 클래스를 만들어도 override 금지

class Animal {
	int age;
public:
	virtual void move() const {
		cout << "동물 - 움직인다" << endl;
	}
};

class Dog : public Animal{
	bool bite;
public:
	virtual void move() const override {		// 조상의 맴버를 overriding 함
		cout << "개 - 달린다" << endl;
	}
};

class Bird : public Animal {
	long long fly;
public:
	virtual void move() const override final {
		cout << "새 - 난다" << endl;
	}
};

//--------
int main()
//--------
{
	// 다형성이라는 유연성을 구현하려면 메모리를 더 사용한다
	// 핵심 키워드는 virtual

	cout << "virtual 멤버가 있는 Dog의 크기 - " << sizeof(Dog) << endl;

	Dog d;
	Bird b;

	Animal* p = &d;
	p->move();

	p = &b;
	p->move();

	save("소스.cpp");
}
