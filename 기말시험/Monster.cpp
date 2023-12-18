//-----------------------------------------------------------------------------
// Monster.CPP
//-----------------------------------------------------------------------------

#include "Monster.h"

int gid{ 0 };					// Monster 생성할 때 마다 id를 부여함

Monster::Monster() 
	: id( ++gid )
{
}

Monster::~Monster()
{

}

int Monster::getId( ) const 	// id 값을 알려준다
{
	return id;
}
