#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

class Rectangle{
public :
	Rectangle(float = 1, float = 1); // default constructor
	float Perimeter(void);
	float Area(void);
	void SetLength(float l);
	float GetLength(void);
	void SetWidth(float w);
	float GetWidth(void);
private :
	float length;
	float width;
};


#endif