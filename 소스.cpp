// 2023. 10. 23 월										(8주 1일)
// 10월 25일(8주 2일) - 중간시험, class 문제 x
//---------------------------------------------------------------------------
// class
//---------------------------------------------------------------------------
// [과제] 나만의 자료형을 많이 만들고 반복 학습
//---------------------------------------------------------------------------

#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include <string>
#include "save.h"

#pragma comment (lib, "winmm.lib")

using namespace std;

class Dog {
	string name;
	int age;
	 
public:
	Dog() {		// default 생성자
		cout << "생성자가 호출됨" << '\n';
		//PlaySound(L"dog-bark6.wav", NULL, SND_ASYNC);
	}

	Dog(string name, int age) : name{ name }, age{ age } {
		cout << name << " - Dog(string, int) 호출됨" << '\n';
		//PlaySound(L"dog-bark6.wav", NULL, SND_ASYNC);
		
	}

	~Dog() {	// 소멸자
		cout << name << " - 소멸자가 호출됨" << '\n';
		//PlaySound(L"개소멸.wav", NULL, SND_ASYNC);
	}

	// copy constructor - 복사생성자
	Dog(const Dog& other) : name{ other.name }, age{ other.age } {
		cout << name << "을 복사생성함" << '\n';
		//PlaySound(L"개소멸.wav", NULL, SND_ASYNC);
	}
	// copy assignment operator - 복사할당연산자

};

//--------
int main()
//--------
{

	Dog dog { "댕댕"s, 2 };
	Dog x { "x"s, 10 };
	
	Dog d = dog;		// 복사 생성
	d = x;				// 복사 할당

	save("소스.cpp");
}