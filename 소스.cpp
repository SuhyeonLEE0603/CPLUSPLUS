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
	STRING s[5]{ "11��", "13�� �Դϴ�", "������", "�������Դϴ�", "11�� 1��° �Դϴ�" };

	// [����] s�� ���� ������������ �����϶�

	qsort(s, 5, sizeof(s), [](const void* a, const void* b) {
		return (int)(((STRING*)a)->length() - ((STRING*)b)->length());
		});

	for (STRING s : s) {
		cout << s << endl;
	}

	//save("�ҽ�.cpp");
}