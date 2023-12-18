#ifndef _Point							// �� ���� include �� �� �ֵ��� ��
#define _Point							// ���Ǻ� ������ - ���۸�

struct Point							// struct - default public
{
	double x, y;

	Point();							// default constructor - ����� �Լ�
	Point(double, double);				
	Point(const Point&) = default;		// ��������� - ����ڰ� ���� �ʿ� ���ٴ� �ǹ�

	friend std::ostream& operator<<(std::ostream&, const Point&);
};

#endif 

