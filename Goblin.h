#pragma once
#include "Character.h"

class FGoblin : public FCharacter
{
public:

	FGoblin();
	virtual ~FGoblin();

	virtual void Move() override;
	virtual void Attack() override;
};

