#include <iostream>
#include <string>
#include <stdexcept>
#include "Rectangle.h"

using namespace std;

int main(void)
{
	Cartesian_Coordinates first , second , third , fourth;

	first.x = 3;
	first.y = 3;

	second.x = 15;
	second.y = 20;

	third.x = 3;
	third.y = 20;

	fourth.x = 15;
	fourth.y = 3;

	Rectangle rect( second , third  , first , fourth  );

	rect.draw();
}