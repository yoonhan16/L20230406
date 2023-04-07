#include "WildBoar.h"
#include <iostream>

FWildBoar::FWildBoar()
{
	std::cout << "¸äµÅÁö »ý¼º" << std::endl;
}

FWildBoar::~FWildBoar()
{
	std::cout << "¸äµÅÁö »èÁ¦" << std::endl;
}

void FWildBoar::Move()
{
	std::cout << "¸äµÅÁö ÀÌµ¿" << std::endl;
}

void FWildBoar::Attack()
{
	std::cout << "¸äµÅÁö °ø°Ý" << std::endl;
}
