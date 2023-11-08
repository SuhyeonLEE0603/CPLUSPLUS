//----------------------------------------------------------------------------------
// STRING.cpp - std::string�� ����� Ŭ����
// 
// 2023. 11. 8 ���� �и�
//----------------------------------------------------------------------------------
#include <iostream>
#include "STRING.h"

STRING::STRING(const char* s) : size{ std::strlen(s) } 
{
	p = new char[size];
	std::memcpy(p, s, size);

	std::cout << "STRING(const char*) - " << size << ", ����:" << (void*)p << std::endl;
}

STRING::~STRING() 
{
	std::cout << "~STRING() - " << size << ", ����:" << (void*)p << std::endl;
	delete[] p;
}

STRING::STRING(const STRING& other) : size{ other.size } 
{
	p = new char[size];

	// ���� ����
	memcpy(p, other.p, size);
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

	p = other.p;
	other.p = nullptr;
	other.size = 0;

	std::cout << "STRING �̵��Ҵ� - " << size << ", ����:" << (void*)p << std::endl;
	return *this;

}

STRING& STRING::operator+(const std::string& other)
{
	memcpy(p + size, &other, other.size());
	size += other.size();

	return *this;
}

void STRING::show() const
{
	for (int i = 0; i < size; ++i) {
		std::cout << p[i];
	}
	std::cout << std::endl;
}
