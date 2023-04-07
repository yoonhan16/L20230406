#pragma once

class FCharacter
{
public:
                                       // 속성 Property
	FCharacter();
	virtual ~FCharacter();             // 소멸자에도 버추얼이 붙어야 상속받는 클래스의 힙데이터도 사라짐(정규 C++ 문법), 그러나 언리얼에서는 안씀(엔진에서 관리)
	                                   // new = os 에서 메모리를 떼서 우리에게 주는것, 엔진에서 힙을 쓰고 싶으면 new를 못쓰고 NewObject를 써야 함 (스폰액터 할때)
	virtual void Move();               // 부모에게 버추얼이 붙으면 상속받는 클래스에는 무조건 붙여야 함, 버추얼이 없으면 디자인이 안됨
	virtual void Attack();             // Method Function

protected:                            //밖에서는 건드리지 못하지만, 상속받는 클래스는 건드릴 수 있는
	int HP;
	int MP;

private:                              //나 말고 아무도 못건드리는


};

