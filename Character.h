#pragma once

class FCharacter
{
public:
                                       // �Ӽ� Property
	FCharacter();
	virtual ~FCharacter();             // �Ҹ��ڿ��� ���߾��� �پ�� ��ӹ޴� Ŭ������ �������͵� �����(���� C++ ����), �׷��� �𸮾󿡼��� �Ⱦ�(�������� ����)
	                                   // new = os ���� �޸𸮸� ���� �츮���� �ִ°�, �������� ���� ���� ������ new�� ������ NewObject�� ��� �� (�������� �Ҷ�)
	virtual void Move();               // �θ𿡰� ���߾��� ������ ��ӹ޴� Ŭ�������� ������ �ٿ��� ��, ���߾��� ������ �������� �ȵ�
	virtual void Attack();             // Method Function

protected:                            //�ۿ����� �ǵ帮�� ��������, ��ӹ޴� Ŭ������ �ǵ帱 �� �ִ�
	int HP;
	int MP;

private:                              //�� ���� �ƹ��� ���ǵ帮��


};

