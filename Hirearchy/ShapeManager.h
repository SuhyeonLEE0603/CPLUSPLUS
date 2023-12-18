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

	friend std::ostream& operator<<(ostream&, const ShapeManager&);

	int GetShapeNum();
	void insert(Shape*);			// ������ �߰��ϴ� �Լ�
	void remove(int);
	void remove_shape(int);
	ShapeManager& reserve();
	void draw() const;				// ��ü ������ �׸��� �Լ�
};

