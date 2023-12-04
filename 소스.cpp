// 2023. 12. 4 ��										(14�� 1��)
//---------------------------------------------------------------------------
// class
// 2023. 12. 11 ��(15�� 1��) - ���б� ����, å �Ұ�
// 2023. 12. 13 ��(15�� 2��) - �⸻����
// 2023. 12. 18 �� - �����Խ�
//---------------------------------------------------------------------------
#include <iostream>
#include "save.h"
#include "STRING.h"

using namespace std;

// C++ ���ø�
// �� �ʿ��Ѱ�? - C++ ���� �Լ� �����ε��� �����ϴ�. (���������� Ÿ�Ը� �ٸ��ٸ�)
//		���� ����� �Լ��� �ڷ����� �ٲ� ��� ������ �Ѵ�. -> ��ǻ�Ͱ� ��� �ϵ���
//		-> ���ø� (�ҽ� �ڵ带 �����Ϸ��� ������ �� �ִ� Ʋ)
// ���� ������?
// ��¥ ���� ���� �����ΰ�?

// [����] main�� �������� ���� �ǵ���� ����ǰ� �� �ּ���
// ���ø����� �ذ��� �ּ���
class Dog {
	int num;
public:
	Dog(int n) : num{n}{}

	Dog operator+(const Dog & rhs) const {
		return Dog(num + rhs.num);
	}

	friend ostream& operator<<(ostream& os, const Dog& d) {
		return os << d.num;
	}
};
template<class T>
T add(T a, T b)
{
	return a + b;
}
template<>
const char* add(const char* a, const char* b)
{
	return "���ø� Ư��ȭ(specialization)";
}

//--------
int main()
//--------
{
	cout << add(1, 2) << endl;
	cout << add("2023", "1204") << endl;
	cout << add(Dog{ 1 }, Dog{ 2 }) << endl;

	save("�ҽ�.cpp");
}