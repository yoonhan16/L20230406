#pragma once
#include "Character.h"

class FWildBoar : public FCharacter
{
public:

	FWildBoar();
	virtual ~FWildBoar();

	virtual void Move() override;
	virtual void Attack() override;
};

