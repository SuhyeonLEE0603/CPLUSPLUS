// 2023. 11. 22 수										(12주 2일)
//---------------------------------------------------------------------------
// class
// 2023. 12. 11 월(15주 1일) - 한학기 정리, 책 소개
// 2023. 12. 13 수(15주 2일) - 기말시험
//---------------------------------------------------------------------------

#include <iostream>
#include <random>
#include <fstream>
#include "save.h"
#include "STRING.h"
using namespace std;

// [문제] "개20마리.txt" 에는 class Dog 객체 20개의 정보가 기록되어 있다
// class Dog{
//		int age;
//		string name;
// 맴버 변수가 있으며
//
//		friend ostream& operator<<(ostream& os, const Dog& dog){
//		return os << dog.age << "\t" << dog.name << "\t";
//		}
// };
// 연산자 << 를 오버로딩하여 파일에 기록하였다
//
// 20마리 정보를 읽어 나이오름차순으로 정렬하여 출력하라

class Dog {
	int age;
	string name;

public:

	// special 함수를 코딩할 이유가 전혀 없음

	int getAge() const {
		return age;
	}

	friend ostream& operator<<(ostream& os, const Dog& dog) {
		return os << dog.age << "\t" << dog.name << "\t";
	}
	friend istream& operator>>(istream& is, Dog& dog) {
		return is >> dog.age >> dog.name;
	}

};

//--------
int main()
//--------
{
	ifstream in{ "개20마리.txt" };
	if (!in) {
		cout << "파일을 읽지 못했다" << endl;
		return 0;
	}

	Dog dogs[20];
	
	for (int i = 0; i < 20; ++i) {
		in >> dogs[i];
	}

	qsort(dogs, sizeof(dogs) / sizeof(Dog), sizeof(Dog), [](const void* a, const void* b) {
		return ((Dog*)a)->getAge() - ((Dog*)b)->getAge();
		});

	cout << "나이 (ascending order)순으로 정렬한 결과" << endl;

	for (const Dog& dog : dogs) {		// const & 꼭 붙일것
		cout << dog << endl;
	}

	save("소스.cpp");
}
