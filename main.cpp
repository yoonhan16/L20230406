#include <iostream>
#include <vector>
#include "Player.h"                             // ���� Ŭ������ ���� ��
#include "Goblin.h"
#include "Slime.h"
#include "WildBoar.h"

using namespace std;

int main()   // entry point �̰� ������ �� �ص� �ȵ�
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



	//FPlayer* Player = new FPlayer();         //1                   // ���͵� �Ȱ��� ����� ��
	//vector<FGoblin*> Goblins;                //1-3                 //FGoblin* Goblin = new FGoblin();          //�̷��� �ϸ� �����ӵ� ������� �Ȱ����� �� ����������
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

	for (int i = 0; i < Characters.size(); i++)                          // �÷��̾ ���� ���
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