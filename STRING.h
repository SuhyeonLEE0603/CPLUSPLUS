//----------------------------------------------------------------------------------
// STRING.h - std::string과 비슷한 클래스
// 
// 2023. 11. 8 파일 분리
//----------------------------------------------------------------------------------
#pragma once

class STRING {
	size_t size;
	char* p;

public:

	STRING(const char*);
	~STRING();

	// 복사생성
	STRING(const STRING&);
	STRING& operator=(const STRING&);

	// 이동생성
	STRING(STRING&& other);
	STRING& operator=(STRING&&);
	
	STRING& operator+(const std::string&);
	friend std::ostream& operator<<(std::ostream&, const STRING&);

	void show() const;
};
