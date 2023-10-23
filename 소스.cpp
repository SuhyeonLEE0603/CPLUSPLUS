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
	Dog() {
		cout << "생성자가 호출됨" << '\n';
		PlaySound(L"dog-bark6.wav", NULL, SND_FILENAME | SND_ASYNC);
	}

	~Dog() {
		cout << "소멸자가 호출됨" << '\n';
		PlaySound(L"개소멸.wav", NULL, SND_FILENAME | SND_ASYNC);
	}
};

//--------
int main()
//--------
{
	Dog dog[5];
	
	save("소스.cpp");
}