// 2023. 12. 4 월										(14주 1일)
//---------------------------------------------------------------------------
// class
// 2023. 12. 11 월(15주 1일) - 한학기 정리, 책 소개
// 2023. 12. 13 수(15주 2일) - 기말시험
// 2023. 12. 18 월 - 성적게시
//---------------------------------------------------------------------------
#include <iostream>
#include "save.h"
#include "STRING.h"

using namespace std;

// C++ 템플릿
// 왜 필요한가? - C++ 언어는 함수 오버로딩이 가능하다. (전달인자의 타입만 다르다면)
//		같은 기능의 함수를 자료형만 바꿔 계속 만들어야 한다. -> 컴퓨터가 대신 하도록
//		-> 템플릿 (소스 코드를 컴파일러가 생성할 수 있는 틀)
// 뭐가 좋은가?
// 진짜 좋은 것은 무엇인가?

// [문제] main을 수정하지 말고 의도대로 실행되게 해 주세요
// 템플릿으로 해결해 주세요
class Dog {
	int num;
public:
	Dog(int n) : num{n}{}

	Dog operator+(const Dog & rhs) const {
		return Dog(num + rhs.num);
	}

	friend ostream& operator<<(ostream& os, const Dog& d) {
		return os << d.num;
	}
};
template<class T>
T add(T a, T b)
{
	return a + b;
}
template<>
const char* add(const char* a, const char* b)
{
	return "탬플릿 특수화(specialization)";
}

//--------
int main()
//--------
{
	cout << add(1, 2) << endl;
	cout << add("2023", "1204") << endl;
	cout << add(Dog{ 1 }, Dog{ 2 }) << endl;

	save("소스.cpp");
}