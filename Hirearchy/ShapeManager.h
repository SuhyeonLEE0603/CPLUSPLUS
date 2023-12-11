#include "Shape.h"

class ShapeManager
{
	int nShape;						// 현재 관리 중인 도형의 갯수
	int capacity;					// 확보한 메모리에 담을 수 있는 도형의 최대 개수
	Shape** shapes;					// 도형의 포인터들을 담을 수 있는 메모리
public:
	explicit ShapeManager(int n);	// 담을 수 있는 도형의 갯수를 생성자에 전달
									// explicit 사용법을 알아보자

	~ShapeManager();
	ShapeManager(const ShapeManager&) = default;

	int GetShapeNum();
	void insert(Shape*);			// 도형을 추가하는 함수
	void remove(int);
	void remove_shape(int);
	void reserve(int);
	void draw() const;				// 전체 도형을 그리는 함수
};

