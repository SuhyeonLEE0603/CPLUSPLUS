//-----------------------------------------------------------------------------
// MemoryMonster.h
//
// 특수기 - 확보한 num개 int 메모리의 값을 1증가 시킨다.
// show() - 메모리의 값을 화면에 출력한다
//-----------------------------------------------------------------------------
#pragma once

#include "Monster.h"

class MemoryMonster : public Monster {
	int num;							// 단위는 milli second
	int* p;

public:
	MemoryMonster( int n );
	~MemoryMonster();

	virtual void special() override;

	void show() const;					// 메모리의 내용을 화면 출력한다

	MemoryMonster& operator++();
};


