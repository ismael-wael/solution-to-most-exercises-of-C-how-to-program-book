#include <iostream>
#include <cmath>
#include "GradeBook.h"

using namespace std;

int main(void)
{
	GradeBook myGradeBook1 (" ismael" , "cs50. ");
	GradeBook myGradeBook2 ("wael" , "cs80. data structures" );

	cout << " myGradeBook1 created for course :" << myGradeBook1.getCourseName() << endl;
	cout << "myGradeBook1 instructor name is : " << myGradeBook1.getInstructorName() << endl;
	cout << " myGradeBook2 created for course :" << myGradeBook2.getCourseName() << endl;
	cout << "myGradeBook2 instructor name is : " << myGradeBook2.getInstructorName() << endl;
	return 0;
}

