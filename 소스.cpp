// 2023. 11. 15 ��										(11�� 2��)
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
	STRING::���� = true;
	STRING s{ "C++ Programming" };

	s = "�л��� �Ĵٺ��� �ʴ´� " + s;
	// 1. ���� �ǿ������� �ɹ��� .operator+(s)�� �ֳ� ã��
	// 2. �����Լ��� ã�� operator+( const char*, STRING )


	cout << s << endl;

	save("�ҽ�.cpp");
}
