#pragma once
#include "Character.h"

class FPlayer : public FCharacter
{
public:

	FPlayer();
	virtual ~FPlayer();

	virtual void Move() override;                         // 상속 받은 친구의 함수에 버추얼이 없으면 자기 밑으로는 상속시키지 말라고 명령하는 것, 그러니까 걍 붙여
	virtual void Attack() override;                       // 버추얼만 있으면 자기로부터 상속 받는 클래스에게 동일 함수 재정의할게 있는지 체크하는 것

};

