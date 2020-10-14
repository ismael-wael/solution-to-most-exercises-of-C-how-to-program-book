#include <iostream>
#include <string>
#include <stdexcept>
#include "Rectangle.h"

using namespace std;

int main(void)
{
	Rectangle rect(5,6);

	float Area = rect.Perimeter();

	cout << "Area = " << Area << endl;

}