#ifndef _Shape					// _Shape�� �տ��� ���ǵ��� �ʾҴٸ�
#define _Shape					// _Shape�� �����Ѵ�
class Shape
{
public:

	Shape(){}
	virtual ~Shape() {}

	virtual void draw() const = 0;		// pure virtual function
};
#endif 
