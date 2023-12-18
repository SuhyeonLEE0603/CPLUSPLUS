//-----------------------------------------------------------------------------
// ScreenMonster.h
//
// 특수기 - 랜덤한 알파벳 문자 n개를 화면에 출력한다
//-----------------------------------------------------------------------------

#pragma once

#include "Monster.h"

class ScreenMonster : public Monster {
	int n;							

public:
	ScreenMonster( int n ) : n{ n } {

	}

	virtual void special() override;
};

