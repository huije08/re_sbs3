
#include <iostream>
#include "../Program/Consumable.h"
#include "../Program/Potion.h"
int main()
{
#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록
	// 설정해주는 기능입니다.

	Consumable consumable;
	Potion potion;

	cout << "Consumable size : " << sizeof(consumable) << endl;
	cout << "Potion size : " << sizeof(potion) << endl;

	// 클래스의 상속 관계에서 상위 클래스느 하위 클래스의 속성을
	// 사용할 수 없으며, 하위 클래스느 상위 클래스의 메모리가 포함된
	// 상태로 메모리의 크기가 결정됩니다.
#pragma endregion

}