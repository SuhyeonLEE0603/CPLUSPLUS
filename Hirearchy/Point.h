#ifndef _Point							// 한 번만 include 할 수 있도록 함
#define _Point							// 조건부 컴파일 - 구글링

struct Point							// struct - default public
{
	double x, y;

	Point();							// default constructor - 스페셜 함수
	Point(double, double);				
	Point(const Point&) = default;		// 복사생성자 - 사용자가 만들 필요 없다는 의미

	friend std::ostream& operator<<(std::ostream&, const Point&);
};

#endif 

