#pragma once
#include "Character.h"

class FPlayer : public FCharacter
{
public:

	FPlayer();
	virtual ~FPlayer();

	virtual void Move() override;                         // ��� ���� ģ���� �Լ��� ���߾��� ������ �ڱ� �����δ� ��ӽ�Ű�� ����� ����ϴ� ��, �׷��ϱ� �� �ٿ�
	virtual void Attack() override;                       // ���߾� ������ �ڱ�κ��� ��� �޴� Ŭ�������� ���� �Լ� �������Ұ� �ִ��� üũ�ϴ� ��

};

