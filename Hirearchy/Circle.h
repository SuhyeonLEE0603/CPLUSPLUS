#include "Point.h"
#include "Shape.h"

// ��������� include ��ſ� ���漱��(forward declaration)�� �� �� �ִ�
// struct Point;
// class Shape;

class Circle : public Shape
{
	Point center;					// �߽����� ��ǥ
	double rad;						// ������
public:

	Circle();
	Circle(const Point&, double);
	Circle(const Circle&);			// ���� ���縦 �� �ʿ䰡 ������ ���α׷��Ӱ� ��������ڸ� ���α׷��� �ʿ�� ����
									// ���� � ������ ���α׷��ؾ� �Ѵٸ� �޸𸮸� �����ϰ� �ڵ� �ؾ� �Ѵ�

	// �� ������ ���� �ٰ� ���� �����Ͽ� ��ġ�� �� �ִ�
	// Circle(const Circle&) = default;
	virtual ~Circle() override;		// �Ҹ��ڸ� ���α׷��� �ʿ䰡 ���ٴ� ���� ������ ����

	virtual void draw() const override;
};
