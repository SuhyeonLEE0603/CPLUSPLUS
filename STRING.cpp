//----------------------------------------------------------------------------------
// STRING.cpp - std::string과 비슷한 클래스
// 
// 2023. 11. 8 파일 분리
//----------------------------------------------------------------------------------
#include <iostream>
#include "STRING.h"

// 2023. 11. 13
bool STRING::관찰{false};		// 관찰하려면 어디선가 관찰을 true로 바꾸세요

// 2023. 11. 13 디폴트 생성자
STRING::STRING()
{
	if (관찰)
		std::cout << "STRING 디폴트 생성자 - " << size << ", 번지:" << (void*)p << std::endl;
}

STRING::STRING(const char* s) 
	: size{ std::strlen(s) }
{
	p = new char[size];
	std::memcpy(p, s, size);
	
	if (관찰)
		std::cout << "STRING(const char*) - " << size << ", 번지:" << (void*)p << std::endl;
}

STRING::~STRING() 
{
	if (관찰)
		std::cout << "~STRING() - " << size << ", 번지:" << (void*)p << std::endl;
	delete[] p;
}

STRING::STRING(const STRING& other) 
	: size{ other.size } 
{
	p = new char[size];

	// 깊은 복사
	memcpy(p, other.p, size);
	if (관찰)
		std::cout << "STRING 복사생성 - " << size << ", 번지:" << (void*)p << std::endl;
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

	if (관찰)
		std::cout << "STRING 복사할당연산자 - " << size << ", 번지:" << (void*)p << std::endl;
	return *this;
}

// C++11에서 도입한 이동생성과 이동할당을 코딩
// && - r-vallue reference(이동문법지원과 완벽전달(perfect forwading))
STRING::STRING(STRING&& other) : size{ other.size } 
{
	p = other.p;

	// 만료(expired)될 객체 other를 초기화한다
	other.size = 0;
	other.p = nullptr;

	std::cout << "STRING 이동생성 - " << size << ", 번지:" << (void*)p << std::endl;

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

	std::cout << "STRING 이동할당 - " << size << ", 번지:" << (void*)p << std::endl;
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
