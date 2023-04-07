#include <iostream>
#include <vector>
#include "Player.h"                             // 만든 클래스를 넣을 때
#include "Goblin.h"
#include "Slime.h"
#include "WildBoar.h"

using namespace std;

int main()   // entry point 이거 없으면 뭘 해도 안됨
{
	srand((unsigned int)time(nullptr));

	vector<FCharacter*> Characters;
	Characters.push_back(new FPlayer());
	int Count = ((rand() % 3) + 1);
	for (int i = 0; i < Count; i++)
	{
		Characters.push_back(new FGoblin());
	}
	Count = ((rand() % 3) + 1);
	for (int i = 0; i < Count; i++)
	{
		Characters.push_back(new FSlime());
	}
	Count = ((rand() % 3) + 1);
	for (int i = 0; i < Count; i++)
	{
		Characters.push_back(new FWildBoar());
	}



	//FPlayer* Player = new FPlayer();         //1                   // 몬스터도 똑같이 만들면 됨
	//vector<FGoblin*> Goblins;                //1-3                 //FGoblin* Goblin = new FGoblin();          //이렇게 하면 슬라임도 멧돼지도 똑같은걸 또 만들어줘야함
	//int Count = ((rand() % 3) + 1);
	//for (int i = 0; i < Count; i++)
	//{
	//	Goblins.push_back(new FGoblin());
	//}
	//FSlime* Slime = new FSlime();            //1-3
	//FWildBoar* WildBoar = new FWildBoar();   //1-3



	while (true)
	{
		for (int i = 0; i < Characters.size(); i++)
		{
			Characters[i]->Move();
		}
		//Player->Move();
		//for (int i = 0; i < Goblins.size(); i++)
		//{
		//	Goblins[i]->Move();
		//}
	}

	for (int i = 0; i < Characters.size(); i++)                          // 플레이어가 죽은 경우
	{
		delete Characters[i];
	}
	//delete Player;
	//for (int i = 0; i < Goblins.size(); i++)
	//{
	//	delete Goblins[i];
	//}







	return 0;
}