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
	STRING s{ "12345" };

	for (int i = 0; i < s.length(); ++i) {
		cout << s[i] << endl;
		//cout << s.operator[](i) << endl;
	}

	save("�ҽ�.cpp");
}