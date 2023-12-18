//-----------------------------------------------------------------------------
// TimeMonster.h
//
// 특수기 - mSec 시간만큼 CPU를 멈춘다
//-----------------------------------------------------------------------------

#pragma once

#include "Monster.h"

class TimeMonster : public Monster {
	int mSec;							// mSec 시간동안 CPU를 멈춘다, 단위는 1/1000초

public:
	TimeMonster( int n ) : mSec( n ) {

	}

	virtual void special() override;
};

