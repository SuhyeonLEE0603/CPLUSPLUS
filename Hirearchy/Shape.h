#ifndef _Shape					// _Shape이 앞에서 정의되지 않았다면
#define _Shape					// _Shape을 정의한다

class Shape
{
public:

	Shape(){}
	~Shape() {}

	virtual void draw() const = 0;		// pure virtual function
};
#endif 
