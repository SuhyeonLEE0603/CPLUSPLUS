// 2023. 11. 13 ��										(11�� 1��)
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
	STRING s{ "C++ Programming Language - Operator Overloading" };

	// [����] s�� ���ڿ��� ������������ �����϶�

	qsort(&s[0], s.length(), sizeof(char), [](const void* a, const void* b) {
		return *(char*)a - *(char*)b;
		});

	cout << s << endl;
	
	save("�ҽ�.cpp");
}