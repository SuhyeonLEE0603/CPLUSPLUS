// 2023. 11. 13 월										(11주 1일)
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

	STRING s{ "123" };

	s = s + "4567890";		// std::string은 POD 처럼 + 연산자를 사용한다
	cout << s;				// 화면 출력 - "1234567890"

	save("소스.cpp");
	save("STRING.cpp");
	save("STRING.h");
}