#include <iostream>
#include "Player.h"                             // ���� Ŭ������ ���� ��
#include "Goblin.h"
#include "Slime.h"

using namespace std;

int main()   // entry point �̰� ������ �� �ص� �ȵ�
{
	int* P = new int();

	FPlayer* Player = new FPlayer();             // ���͵� �Ȱ��� ����� ��
	FGoblin* Goblin = new FGoblin();
	FSlime* Slime = new FSlime();

	Player->Move();
	Goblin->Move();
	Slime->Move();


	delete Player;                               // �÷��̾ ���� ���

	return 0;
}