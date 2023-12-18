//-----------------------------------------------------------------------------
// TimeMonster.cpp 
//
// 특수기 - mSec 시간만큼 CPU를 멈춘다
//-----------------------------------------------------------------------------

#include <iostream>
#include <thread>
#include <chrono>
#include "TimeMonster.h"

void TimeMonster::special() 
{
	using std::cout;
	using std::thread;

	cout << "[" << id << "] : CPU 정지 - " << mSec << "ms" << '\n';

	std::this_thread::sleep_for( std::chrono::milliseconds( mSec ) );
}