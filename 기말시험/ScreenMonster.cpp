//-----------------------------------------------------------------------------
// ScreenMonster.cpp
//
// 특수기 - n개의 랜덤한 알파벳 문자를 화면에 출력한다
//-----------------------------------------------------------------------------

#include <iostream>
#include <random>
#include "ScreenMonster.h"

std::default_random_engine dre{ 202312 };
std::uniform_int_distribution<int> uiLower{ 'a', 'z' };
std::uniform_int_distribution<int> uiUpper{ 'A', 'Z' };
std::uniform_int_distribution<int> uiEvenOdd{ 0, 1 };

void ScreenMonster::special()
{
	std::cout << "[" << id << "] : 문자 --> ";

	char c;

	for ( int i = 0; i < n; ++i ) {
		if ( uiEvenOdd( dre ) == 0 )
			c = uiLower( dre );
		else
			c = uiUpper( dre );
		std::cout << c;
	}
	std::cout << '\n';
}