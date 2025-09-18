#include "Golem.h"
#include "stdafx.h"

using namespace std;
Golem::Golem()
{
	name = "Golem";
	health = 250;
	attack = 1;
	defense = 1;
}

void Golem::Describe()
{
	cout << "describe Golem";
	cout << endl;
}
Golem::~Golem()
{
	cout << "Destroy Monster";
}