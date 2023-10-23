// 2023. 10. 23 ��										(8�� 1��)
// 10�� 25��(8�� 2��) - �߰�����, class ���� x
//---------------------------------------------------------------------------
// class
//---------------------------------------------------------------------------
// [����] ������ �ڷ����� ���� ����� �ݺ� �н�
//---------------------------------------------------------------------------

#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include <string>
#include "save.h"

#pragma comment (lib, "winmm.lib")

using namespace std;

class Dog {
	string name;
	int age;
	 
public:
	Dog() {		// default ������
		cout << "�����ڰ� ȣ���" << '\n';
		//PlaySound(L"dog-bark6.wav", NULL, SND_ASYNC);
	}

	Dog(string name, int age) : name{ name }, age{ age } {
		cout << name << " - Dog(string, int) ȣ���" << '\n';
		//PlaySound(L"dog-bark6.wav", NULL, SND_ASYNC);
		
	}

	~Dog() {	// �Ҹ���
		cout << name << " - �Ҹ��ڰ� ȣ���" << '\n';
		//PlaySound(L"���Ҹ�.wav", NULL, SND_ASYNC);
	}

	// copy constructor - ���������
	Dog(const Dog& other) : name{ other.name }, age{ other.age } {
		cout << name << "�� ���������" << '\n';
		//PlaySound(L"���Ҹ�.wav", NULL, SND_ASYNC);
	}
	// copy assignment operator - �����Ҵ翬����

};

//--------
int main()
//--------
{

	Dog dog { "���"s, 2 };
	Dog x { "x"s, 10 };
	
	Dog d = dog;		// ���� ����
	d = x;				// ���� �Ҵ�

	save("�ҽ�.cpp");
}