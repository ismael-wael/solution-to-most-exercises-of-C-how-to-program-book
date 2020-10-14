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

int Rectangle::Perimeter(void)
{
	return (length * 2) + (width * 2);
}

int Rectangle::Area(void)
{
	return length * width;
}

void Rectangle::dimensions(void)
{
	int x1 = abs(corners[1].x - corners[2].x); 
	int x2 = abs(corners[1].x - corners[3].x); 
	int x  = x1 > x2 ? x1 : x2;

	int y1 = abs(corners[1].y - corners[2].y); 
	int y2 = abs(corners[1].y - corners[3].y); 
	int y  = y1 > y2 ? y1 : y2;

	if(x >= y) // works for rectangle and square
	{ // Horizontal Rectangle
		length = x;
		width = y;
		RectanglePosition = 0;
	}
	else 
	{ // Vertical Rectangle
		length = y;
		width  = x;
		RectanglePosition = 1;
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

int Rectangle::LeftDownSetDetection(void)
{
	int sum;
	int smallest = 50;
	int index = 0;

	for(int i = 1 ; i < 5 ; i++)
	{
		sum = corners[i].x + corners[i].y;
		if(sum < smallest)
		{
			smallest = sum;
			index = i;
		}
	}

	return index;
}

void Rectangle::draw(void)
{
	const char* Grid[25][25];

	for(int row = 0 ; row < 25 ; row++)
	{
		for(int col = 0 ; col < 25 ; col++)
		{
			Grid[row][col]  = "." ;
		}
	}

	int leftDownCorner = LeftDownSetDetection(); 
	Cartesian_Coordinates pen;

	pen.x = 24 - corners[leftDownCorner].x; 
	pen.y = corners[leftDownCorner].y; // it's 25 by 25 grid

	int limit = RectanglePosition ? pen.x - length : pen.x - width;

	while(pen.x > limit)
	{
		Grid[pen.x--][pen.y] = "#";
	}
	pen.x++; // cancel the last increment

	limit = RectanglePosition ? width + pen.y : length + pen.y;

	while(pen.y < limit)
	{
		Grid[pen.x][pen.y++] = "#";
	}
	pen.y--; // cancel the last increment

	limit = RectanglePosition ? pen.x + length : pen.x + width;

	while(pen.x < limit)
	{
		Grid[pen.x++][pen.y] = "#";
	}
	pen.x--; // cancel the last decrement

    limit = RectanglePosition ?  pen.y - width: pen.y - length;

	while(pen.y > limit)
	{
		Grid[pen.x][pen.y--] = "#";
	}
	pen.y++;

	for(int row = 0 ; row < 25 ; row++)
	{
		for(int col = 0 ; col < 25 ; col++)
		{
			cout <<Grid[row][col];
		}
		cout << endl;
	}
}