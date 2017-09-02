#include <iostream>
#include "GameLoop.h"

using namespace std;

void runGame()
{
	const double MS_PER_UPDATE = 8;
	double lag = 0;

	//^7
	render(lag / MS_PER_UPDATE);
	//^7
}

void main()
{
	runGame();
}