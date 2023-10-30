#include <iostream>
#include "save.h"

using namespace std;

// [문제] 나는 Memory Monster다. 생성시에 int 값 num을 전달하면
// Free store에 num개의 int를 저장할 공간을 확보하고 그 값을 모두 num으로 채운다.
// 다음 코드가 문제없이 실행되도록 코딩하자

class MemoryMonster {
	int num;
	int* p;
public:

	MemoryMonster(int n) : num{ n } {
		p = new int[num];
		for (int i = 0; i < num; ++i) {
			p[i] = num;
		}
	}

	void show() {
		cout << "Monster - " << num << endl;
	}

	~MemoryMonster() {
		delete[] p;
	}
};

//--------
int main()
//--------
{
	MemoryMonster mon{ 123 };

	mon.show();		// 화면에 "Monster - 123" 이라고 출력한다

	//save("소스.cpp");
}