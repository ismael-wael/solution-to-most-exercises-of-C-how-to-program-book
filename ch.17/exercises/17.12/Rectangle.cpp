#include <stdexcpt.h>
#include <iostream>
#include <cmath>
#include <string>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(Cartesian_Coordinates first,Cartesian_Coordinates second,Cartesian_Coordinates third, Cartesian_Coordinates fourth) // default constructor
{
	setRectangle(first,second ,third , fourth);
}

void Rectangle::setRectangle(Cartesian_Coordinates first,Cartesian_Coordinates second,Cartesian_Coordinates third, Cartesian_Coordinates fourth)
{
	Cartesian_Coordinates input[4] = {first , second , third , fourth};

	for(int i = 0 ; i < 4 ; i++)
	{
		if(IsInFirstQuadrant(input[i]))
		{
			corners[i+1].x = input[i].x;
			corners[i+1].y = input[i].y;
		}
	}
	dimensions();
}

float Rectangle::Perimeter(void)
{
	return (length * 2) + (width * 2);
}

float Rectangle::Area(void)
{
	return length * width;
}

void Rectangle::dimensions(void)
{
	float x1 = abs(corners[1].x - corners[2].x); 
	float x2 = abs(corners[1].x - corners[3].x); 
	float x  = x1 > x2 ? x1 : x2;

	float y1 = abs(corners[1].y - corners[2].y); 
	float y2 = abs(corners[1].y - corners[3].y); 
	float y  = y1 > y2 ? y1 : y2;

	if(x >= y) // works for rectangle and square
	{
		length = x;
		width = y;
	}
	else 
	{
		length = y;
		width  = x;
	}
}

bool Rectangle::IsInFirstQuadrant(Cartesian_Coordinates cartesian) // predictate function 
{
	if((cartesian.x >= 0) && (cartesian.y >= 0))
	{
		return true;
	}

	return false;
}

bool Rectangle::IsSquare(void)
{
	if (length == width )
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Rectangle::IsRectangle(void)
{
	if (length > width )
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Rectangle::draw(void)
{

}