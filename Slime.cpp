#include "Slime.h"
#include <iostream>

FSlime::FSlime()
{
	std::cout << "슬라임 생성" << std::endl;
}

FSlime::~FSlime()
{
	std::cout << "슬라임 삭제" << std::endl;
}

void FSlime::Move()
{
	std::cout << "슬라임 이동" << std::endl;
}

void FSlime::Attack()
{
	std::cout << "슬라임 공격" << std::endl;
}
