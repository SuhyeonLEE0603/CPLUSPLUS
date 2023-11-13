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

	// 컴파일러는 연산자 오버로딩을 해결하기 위해
	// lhs  operator기호  rhs 
	// 1. lhs의 맴버함수로 operator기호(rhs) 함수가 있는지 찾음
	// 2. operator기호(lhs, rhs)인 전역함수가 있나 찾음
	

	save("소스.cpp");
	save("STRING.cpp");
	save("STRING.h");
}