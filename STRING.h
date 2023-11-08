//----------------------------------------------------------------------------------
// STRING.h - std::string�� ����� Ŭ����
// 
// 2023. 11. 8 ���� �и�
//----------------------------------------------------------------------------------
#pragma once
#include <string>

class STRING {
	size_t size;
	char* p;

public:

	STRING(const char* s);
	~STRING();

	// �������
	STRING(const STRING& other);
	STRING& operator=(const STRING& other);

	// �̵�����
	STRING(STRING&& other);
	STRING& operator=(STRING&& other);
	
	STRING& operator+(const std::string& other);
	void show() const;
};
