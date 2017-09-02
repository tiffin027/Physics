#include <iostream>
#include "DoubleBuffer.h"

using namespace std;
using namespace UnbufferedSlapstick;

void sample1()
{
	//^8
	Stage stage;

	Comedian* harry = new Comedian();
	Comedian* baldy = new Comedian();
	Comedian* chump = new Comedian();

	harry->face(baldy);
	baldy->face(chump);
	chump->face(harry);

	stage.add(harry, 0);
	stage.add(baldy, 1);
	stage.add(chump, 2);
	//^8

	//^9
	harry->slap();

	stage.update();
	//^9

	//^10
	stage.add(harry, 2);
	stage.add(baldy, 1);
	stage.add(chump, 0);
	//^10
}

void testComedy1(int a, int b, int c)
{
	std::cout << std::endl << "test" << std::endl;

	Stage stage;

	Comedian* larry = new Comedian("larry");
	Comedian* curly = new Comedian("curly");
	Comedian* shemp = new Comedian("shemp");

	larry->face(curly);
	curly->face(shemp);
	shemp->face(larry);

	stage.add(larry, a);
	stage.add(curly, b);
	stage.add(shemp, c);

	larry->slap();
	for (int i = 0; i < 3; i++)
	{
		std::cout << "update" << std::endl;
		stage.update();
	}
}

void testComedy()
{
	testComedy1(0, 1, 2);
	testComedy1(2, 1, 0);
}

void main()
{
	sample1();
	testComedy();
}