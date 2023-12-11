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

	int GetShapeNum();
	void insert(Shape*);			// ������ �߰��ϴ� �Լ�
	void remove(int);
	void remove_shape(int);
	void reserve(int);
	void draw() const;				// ��ü ������ �׸��� �Լ�
};

