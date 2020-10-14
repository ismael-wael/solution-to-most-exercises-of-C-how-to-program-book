#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

typedef struct {
	float x;
	float y;
}Cartesian_Coordinates;

class Rectangle{

public :
	Rectangle(Cartesian_Coordinates ,Cartesian_Coordinates,Cartesian_Coordinates , Cartesian_Coordinates); // default constructor
	void setRectangle(Cartesian_Coordinates ,Cartesian_Coordinates ,Cartesian_Coordinates , Cartesian_Coordinates);
	float Perimeter(void);
	float Area(void);
	void dimensions(void);

	bool IsSquare(void); // predictate function 
	bool IsRectangle(void); // predictate function 
	void draw(void);

private :
	Cartesian_Coordinates corners[5];

	float length;
	float width;

	bool IsInFirstQuadrant(Cartesian_Coordinates ); // predictate function 
};

#endif