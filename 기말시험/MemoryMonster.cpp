//-----------------------------------------------------------------------------
// MemoryMonster.cpp
// 
// 특수기 - 확보한 메모리의 모든 바이트 값을 1증가 시킨다.
//-----------------------------------------------------------------------------
#include <iostream>
#include "MemoryMonster.h"

MemoryMonster::MemoryMonster( int n ) 
	: num( n )	
{
	p = new int[num];
	for ( int i = 0; i < num; ++i )
		p[i] = i;
}

MemoryMonster::~MemoryMonster()
{
	delete[] p;
}

void MemoryMonster::special()
{
	std::cout << "[" << id << "] : 모든 int 값 1증가" << '\n';

	for ( int i = 0; i < num; ++i )
		++p[i];
}

void MemoryMonster::show() const 
{
	std::cout << "MemoryMonster [" << id << "] - " << num << "개 값 출력 " << '\n';

	for ( int i = 0; i < num; ++i )
		std::cout << static_cast<int>(p[i]) << ' ';
	std::cout << '\n';
}

MemoryMonster& MemoryMonster::operator++()
{
	std::cout << "[" << id << "] : 모든 int 값 1증가" << '\n';
	for (int i = 0; i < num; ++i)
		++p[i];
}

