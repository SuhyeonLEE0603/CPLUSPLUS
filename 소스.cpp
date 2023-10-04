// 2023. 10. 4 ��										(5�� 2��)
// 10�� 9��(6�� 1��) - ������ ����
// 10�� 25��(8�� 2��) - �߰�����
//---------------------------------------------------------------------------
// ����(sort) - C��� ���̺귯�� �Լ� qsort
//---------------------------------------------------------------------------

#include <iostream>
#include "save.h"
using namespace std;

//--------
int main()
//--------
{
	char p[] = "the quick brown fox jumps over the lazy dog";
	cout << p << endl;

	// [����] p�� ������������ ������ �� ����϶�
	qsort(p, strlen(p), sizeof(char), [](const void* a, const void* b) {
		return *(char*)a - *(char*)b; }
	);

	cout << p << endl;
	
	save("�ҽ�.cpp");
}
