//----------------------------------------------------------------------------------
// STRING.h - std::string과 비슷한 클래스
// 
// 2023. 11. 8 파일 분리
// 2023. 11. 13 원할때만 관찰할 수 있게 Flag 처리
//----------------------------------------------------------------------------------
#pragma once

class STRING {
	size_t size{};
	char* p{};
	
public:
	// 2023. 11. 13
	static bool 관찰;					// 클래스 로컬 맴버이면서 전역변수 취급

public:
	// 2023. 11. 13 디폴트 생성자
	STRING();							// special funtion	
	STRING(const char*);
	~STRING();							// special funtion

	// 복사생성
	STRING(const STRING&);				// special funtion
	STRING& operator=(const STRING&);	// special funtion

	// 이동생성
	STRING(STRING&& other);				// special funtion
	STRING& operator=(STRING&&);		// special funtion
	
	// 2023. 11. 13 연산자 오버로딩
	STRING operator+(const char*) const;
	friend std::ostream& operator<<(std::ostream&, const STRING&);

	void show() const;
};
