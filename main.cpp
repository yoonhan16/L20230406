#include <iostream>
#include "Player.h"                             // 만든 클래스를 넣을 때
#include "Goblin.h"
#include "Slime.h"

using namespace std;

int main()   // entry point 이거 없으면 뭘 해도 안됨
{
	int* P = new int();

	FPlayer* Player = new FPlayer();             // 몬스터도 똑같이 만들면 됨
	FGoblin* Goblin = new FGoblin();
	FSlime* Slime = new FSlime();

	Player->Move();
	Goblin->Move();
	Slime->Move();


	delete Player;                               // 플레이어가 죽은 경우

	return 0;
}