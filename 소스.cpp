// 2023. 11. 15 ��										(11�� 2��)
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
	
	// [����] "122333444455555" �� ������
	// s�� ��� ���� temp�� ������

	qsort(s, sizeof(s) / sizeof(STRING), sizeof(STRING), [](const void* a, const void* b) {
		return static_cast<int>(((STRING*)a)->length() - ((STRING*)b)->length());		// return ���� ����� ��ġ�� �ٲ�
		});

	STRING temp;
	for (const STRING& s : s) {
		temp = temp + s;
	}

	cout << temp << endl;

	save("�ҽ�.cpp");
}
