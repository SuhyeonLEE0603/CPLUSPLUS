// 2023. 11. 15 목										(11주 2일)
//---------------------------------------------------------------------------
// class
//---------------------------------------------------------------------------

#include <iostream>
#include "STRING.h"
#include <algorithm>
#include "save.h"
using namespace std;

//--------
int main()
//--------
{
	STRING s[5]{ "333", "1", "55555", "4444", "22" };
	
	// [문제] "122333444455555" 를 만들어라
	// s를 모두 더한 temp를 만들어라

	qsort(s, sizeof(s) / sizeof(STRING), sizeof(STRING), [](const void* a, const void* b) {
		return static_cast<int>(((STRING*)a)->length() - ((STRING*)b)->length());		// return 값이 양수면 위치를 바꿈
		});

	STRING temp;
	for (const STRING& s : s) {
		temp = temp + s;
	}

	cout << temp << endl;

	save("소스.cpp");
}
