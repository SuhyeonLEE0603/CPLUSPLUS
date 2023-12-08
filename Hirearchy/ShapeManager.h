#include "Shape.h"

class ShapeManager
{
	int nShape;						// ���� ���� ���� ������ ����
	int capacity;					// Ȯ���� �޸𸮿� ���� �� �ִ� ������ �ִ� ����
	Shape** shapes;					// ������ �����͵��� ���� �� �ִ� �޸�
public:
	explicit ShapeManager(int n);	// ���� �� �ִ� ������ ������ �����ڿ� ����
									// explicit ������ �˾ƺ���

	~ShapeManager();
	ShapeManager(const ShapeManager&) = default;

	void insert(Shape*);			// ������ �߰��ϴ� �Լ�
	void draw() const;				// ��ü ������ �׸��� �Լ�
};
