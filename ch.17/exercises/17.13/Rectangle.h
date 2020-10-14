#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

/* note :
when you enter vertices,
you enter them with respect to Cartesian Grid
no Grid Array of the code
*/

typedef struct {
	int x; // rows (y in cartesian grid)
	int y; // cols (x in cartesian grid)
}Cartesian_Coordinates;

class Rectangle{

public :
	Rectangle(Cartesian_Coordinates ,Cartesian_Coordinates,Cartesian_Coordinates , Cartesian_Coordinates); // default constructor
	void setRectangle(Cartesian_Coordinates ,Cartesian_Coordinates ,Cartesian_Coordinates , Cartesian_Coordinates);
	int Perimeter(void);
	int Area(void);
	void dimensions(void);

	bool IsSquare(void); // predictate function 
	bool IsRectangle(void); // predictate function 
	void draw(void);

private :
	Cartesian_Coordinates corners[5];

	int length;
	int width;
	bool RectanglePosition ; // 0 -> Horizontal , 1 -> Vertical

	bool IsInFirstQuadrant(Cartesian_Coordinates ); // predictate function 
	int LeftDownSetDetection(void);
};

#endif