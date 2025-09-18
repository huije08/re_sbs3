#include <iostream>
#include "../Program/Monster.h"
#include "../Program/Golem.h"
#include "../Program/Skeleton.h"
#include "../Program/Slime.h"
#include "../Program/Transform.h"

using namespace std;




int main()
{
#pragma region 다형성
	// 여러 개의 서로 다른 객체가 동일한 기능을
	// 서로 다른 방법으로 처리할 수 있는 기능입니다.

#pragma region 가상함수


	Monster* pointer = nullptr;
	int select = 0;

	int input = 0;

	while (true)
	{
		cin >> input;

		switch (input)
		{
		case 0: pointer = new Slime;
			break;
		case 1: pointer = new Skeleton;
			break;
		case 2: pointer = new Golem;
			break;
		default: cout << "Exception" << endl;
			continue;
		}

		// 가상 함수는 한 개 이사으이 함수를 포함하는 클래스가
		// 있을 때 객체 주소에 가상 함수 테이블을 추가합니다.
		pointer->Describe();
		delete pointer;

		break;
	}
#pragma endregion

#pragma region 오버로딩
	// 같은 이름의 함수를 매개 벼수의 자료형과 매개 변수의 
	// 수로 구분하여 여러 개를 선언할 수 있는 기능입니다.

	Transform transform;

	transform.Rotate(10);
	transform.Rotate(12.5f);
	transform.Rotate(1);

	// 함수의 오버로딩의 경우 함수의 매개
#pragma endregion



	// 다형성은 컴파일 시점에 함수와 속성이 결정되는
	// 정저거 바인딩을 하지 않고, 실행 시간에
#pragma endregion


}
