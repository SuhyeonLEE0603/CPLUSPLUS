//----------------------------------------------------------------------------------
// STRING.cpp - std::string�� ����� Ŭ����
// 
// 2023. 11. 8 ���� �и�
//----------------------------------------------------------------------------------
#include <iostream>
#include "STRING.h"

// 2023. 11. 13
bool STRING::����{false};		// �����Ϸ��� ��𼱰� ������ true�� �ٲټ���

// 2023. 11. 13 ����Ʈ ������
STRING::STRING()
{
	if (����)
		std::cout << "STRING ����Ʈ ������ - " << size << ", ����:" << (void*)p << std::endl;
}

STRING::STRING(const char* s) 
	: size{ std::strlen(s) }
{
	p = new char[size];
	std::memcpy(p, s, size);
	
	if (����)
		std::cout << "STRING(const char*) - " << size << ", ����:" << (void*)p << std::endl;
}

STRING::~STRING() 
{
	if (����)
		std::cout << "~STRING() - " << size << ", ����:" << (void*)p << std::endl;
	delete[] p;
}

STRING::STRING(const STRING& other) 
	: size{ other.size } 
{
	p = new char[size];

	// ���� ����
	memcpy(p, other.p, size);
	if (����)
		std::cout << "STRING ������� - " << size << ", ����:" << (void*)p << std::endl;
}

STRING& STRING::operator=(const STRING& other) 
{
	if (this == &other) {
		return *this;
	}

	delete[] p;

	size = other.size;
	p = new char[size];
	memcpy(p, other.p, size);

	if (����)
		std::cout << "STRING �����Ҵ翬���� - " << size << ", ����:" << (void*)p << std::endl;
	return *this;
}

// C++11���� ������ �̵������� �̵��Ҵ��� �ڵ�
// && - r-vallue reference(�̵����������� �Ϻ�����(perfect forwading))
STRING::STRING(STRING&& other) : size{ other.size } 
{
	p = other.p;

	// ����(expired)�� ��ü other�� �ʱ�ȭ�Ѵ�
	other.size = 0;
	other.p = nullptr;

	std::cout << "STRING �̵����� - " << size << ", ����:" << (void*)p << std::endl;

}

// 2023. 11. 8 move assignment operator
STRING& STRING::operator=(STRING&& other)
{
	if (this == &other) {
		return *this;
	}
	delete[] p;

	size = other.size;
	p = other.p;
 
	other.p = nullptr;
	other.size = 0;

	std::cout << "STRING �̵��Ҵ� - " << size << ", ����:" << (void*)p << std::endl;
	return *this;

}

STRING STRING::operator+(const char* s) const
{
	STRING temp;

	temp.size = size + strlen(s);
	temp.p = new char[temp.size];

	memcpy(temp.p, p, size);
	memcpy(temp.p + size, s, strlen(s));

	return temp;
}

void STRING::show() const
{
	for (int i = 0; i < size; ++i) {
		std::cout << p[i];
	}
	std::cout << std::endl;
}

std::ostream& operator<<(std::ostream& os, const STRING& s)
{
	for (int i = 0; i < s.size; ++i) {
		os << s.p[i];
	}

	return os;
}
