//----------------------------------------------------------------------------------
// STRING.h - std::string�� ����� Ŭ����
// 
// 2023. 11. 8 ���� �и�
//----------------------------------------------------------------------------------
#pragma once

class STRING {
	size_t size;
	char* p;

public:

	STRING(const char*);
	~STRING();

	// �������
	STRING(const STRING&);
	STRING& operator=(const STRING&);

	// �̵�����
	STRING(STRING&& other);
	STRING& operator=(STRING&&);
	
	STRING& operator+(const std::string&);
	friend std::ostream& operator<<(std::ostream&, const STRING&);

	void show() const;
};
