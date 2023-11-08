//----------------------------------------------------------------------------------
// STRING.h - std::string과 비슷한 클래스
// 
// 2023. 11. 8 파일 분리
//----------------------------------------------------------------------------------
#pragma once
#include <string>

class STRING {
	size_t size;
	char* p;

public:

	STRING(const char* s);
	~STRING();

	// 복사생성
	STRING(const STRING& other);
	STRING& operator=(const STRING& other);

	// 이동생성
	STRING(STRING&& other);
	STRING& operator=(STRING&& other);
	
	STRING& operator+(const std::string& other);
	void show() const;
};
