#include <iostream>
#include <string>
#include <stdexcept>
#include "Rectangle.h"

using namespace std;

int main(void)
{
	Cartesian_Coordinates first , second , third , fourth;

	first.x = 1;
	first.y = 4;

	second.x = 5;
	second.y = 4;

	third.x = 5;
	third.y = 1;

	fourth.x = 1;
	fourth.y = 1;

	Rectangle rect( second , third  , first , fourth  ); // order independent

	float Area = rect.Area();

	cout << "Area = " << Area << endl;
}