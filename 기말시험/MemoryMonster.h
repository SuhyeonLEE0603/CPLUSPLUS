//-----------------------------------------------------------------------------
// MemoryMonster.h
//
// Ư���� - Ȯ���� num�� int �޸��� ���� 1���� ��Ų��.
// show() - �޸��� ���� ȭ�鿡 ����Ѵ�
//-----------------------------------------------------------------------------
#pragma once

#include "Monster.h"

class MemoryMonster : public Monster {
	int num;							// ������ milli second
	int* p;

public:
	MemoryMonster( int n );
	~MemoryMonster();

	virtual void special() override;

	void show() const;					// �޸��� ������ ȭ�� ����Ѵ�

	MemoryMonster& operator++();
};


