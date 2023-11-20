// 2023. 11. 15 목										(11주 2일)
//---------------------------------------------------------------------------
// class
// 2023. 12. 13 기말시험
//---------------------------------------------------------------------------

#include <iostream>
#include <random>
#include <fstream>
#include "save.h"
#include "STRING.h"
using namespace std;

default_random_engine dre;
uniform_int_distribution uid{ 1, 100 };

int gn{ 0 };

class Dog {
private:
	string name;
	int age;

public:
	Dog(){			// 이 함수는 자동으로 inline화
		age = uid(dre);
		name = "댕댕-" + to_string(++gn) + "호";
	}

	friend ostream& operator<<(ostream& os, const Dog& dog) {
		os << "나이 - " << dog.age << ", 이름 - " << dog.name;
		return os;
	}
};

//--------
int main()
//--------
{
	Dog dogs[20];		// 이름과 나이는 랜덤으로

	ofstream out{ "개20마리.txt" };

	for (const Dog& dog : dogs) {
		out << dog << endl;
	}


	save("소스.cpp");
}
