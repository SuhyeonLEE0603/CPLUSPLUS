// 2023. 11. 15 목										(11주 2일)
//---------------------------------------------------------------------------
// class
//---------------------------------------------------------------------------

#include <iostream>
#include "STRING.h"
#include "save.h"
using namespace std;




//--------
int main()
//--------
{
	STRING::관찰 = true;
	STRING s{ "C++ Programming" };

	s = "학생을 쳐다보지 않는다 " + s;
	// 1. 왼쪽 피연산자의 맴버로 .operator+(s)가 있나 찾음
	// 2. 전역함수를 찾음 operator+( const char*, STRING )


	cout << s << endl;

	save("소스.cpp");
}
