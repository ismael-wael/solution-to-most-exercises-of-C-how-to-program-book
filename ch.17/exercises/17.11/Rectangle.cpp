#include <stdexcpt.h>
#include <iostream>
#include <string>
#include "Rectangle.h"

Rectangle::Rectangle(float l, float w) // default constructor
{
	SetLength(l);
	SetWidth(w);
}

void Rectangle::SetLength(float l)
{
	if((l > 0.0) && (l < 20.0))
	{
		length = l;
	}
	else
	{
		length = 1;
	}
		
}

float Rectangle::GetLength(void)
{
	return length;
}

void Rectangle::SetWidth(float w)
{
	if((w > 0.0) && (w < 20.0))
	{
		width = w;
	}
	else
	{
		width = 1;
	}
}

float Rectangle::GetWidth(void)
{
	return width;
}

float Rectangle::Perimeter(void)
{
	return (length * 2) + (width * 2);
}

float Rectangle::Area(void)
{
	return (length * width);
}
