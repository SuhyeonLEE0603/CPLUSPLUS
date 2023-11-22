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

class X {
private:
	// data member;
public:
	// function member;
	// 1. special member;
	// 2. opreator overloading;
	// 3. getter/setter interface;
	// 4. friend (>>, <<)

	// 자원을 관리(RAII)
	// 소멸자에서 해제를 해줘야함
	// smart*를 사용했으면 special function을 반드시 코딩해야함
};

//--------
int main()
//--------
{

	// X a;			// a를 instancing, Data(전역에 정의시)
	// {X  a;}		// Stack
	// X* a = new X;	// Free Store
	
	save("소스.cpp");
}
