//-----------------------------------------------------------------------------
// Monster.h
//
// 모든 Monster의 부모 클래스이다.
// Monster는 자신만의 특수기술을 갖는다
// Monster를 상속하려면 special 멤버를 구현해야 한다.
//-----------------------------------------------------------------------------

#pragma once

class Monster {

protected:							// 자식 클래스는 protected 멤버를 자신의 private 멤버로 사용할 수 있다.
	int id;							// 생성된 모든 몬스터에 붙는 id
										
public:
	Monster();
	~Monster();

	int getId( ) const;				// id 값을 알려준다

	virtual void special() = 0;		// 특수기술
};

