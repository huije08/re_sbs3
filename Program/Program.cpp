#include <iostream>
#include "Monster.h"
#include "Golem.h"
#include "Skeleton.h"
#include "Slime.h"

using namespace std;




int main()
{
#pragma region 다형성
	// 여러 개의 서로 다른 객체가 동일한 기능을
	// 서로 다른 방법으로 처리할 수 있는 기능입니다.

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
		pointer->Describe();

		delete pointer;
		break;
	}

	

	// Monster* slime = new Slime();
	// 
	// slime->Stat();
	// slime->Describe();
	// Slime slime;
	// slime.Stat();
	// slime.Describe();
	// 
	// Skeleton skeleton;
	// skeleton.Stat();
	// skeleton.Describe();
	// 
	// Golem golem;
	// golem.Stat();
	// golem.Describe();



	// 다형성은 컴파일 시점에 함수와 속성이 결정되는
	// 정저거 바인딩을 하지 않고, 실행 시간에
#pragma endregion


}
