// 2023. 10. 4 ��										(5�� 2��)
// 10�� 9��(6�� 1��) - ������ ����
// 10�� 25��(8�� 2��) - �߰�����
//---------------------------------------------------------------------------
// ����(sort) - C��� ���̺귯�� �Լ� qsort
//---------------------------------------------------------------------------

#include <iostream>
#include "save.h"
using namespace std;

int comp(const void*, const void*);

//--------
int main()
//--------
{
	char p[] = "the quick brown fox jumps over the lazy dog";
	cout << p << endl;

	// [����] p�� ������������ ������ �� ����϶�
	qsort(p, strlen(p), sizeof(char), comp);

	cout << p << endl;
	
	save("�ҽ�.cpp");
}

int comp(const void* a, const void* b) {
	return *(char*)a - *(char*)b;
}
