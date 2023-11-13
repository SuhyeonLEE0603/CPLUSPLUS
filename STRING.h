//----------------------------------------------------------------------------------
// STRING.h - std::string�� ����� Ŭ����
// 
// 2023. 11. 8 ���� �и�
// 2023. 11. 13 ���Ҷ��� ������ �� �ְ� Flag ó��
//----------------------------------------------------------------------------------
#pragma once

class STRING {
	size_t size{};
	char* p{};
	
public:
	// 2023. 11. 13
	static bool ����;					// Ŭ���� ���� �ɹ��̸鼭 �������� ���

public:
	// 2023. 11. 13 ����Ʈ ������
	STRING();							// special funtion	
	STRING(const char*);
	~STRING();							// special funtion

	// �������
	STRING(const STRING&);				// special funtion
	STRING& operator=(const STRING&);	// special funtion

	// �̵�����
	STRING(STRING&& other);				// special funtion
	STRING& operator=(STRING&&);		// special funtion
	
	// 2023. 11. 13 ������ �����ε�
	STRING operator+(const char*) const;
	friend std::ostream& operator<<(std::ostream&, const STRING&);

	void show() const;
};
