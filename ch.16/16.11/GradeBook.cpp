#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string iName, string cName)  
{
	setName(iName,cName);
}
void GradeBook::setName(string iName, string cName) 
{
	if(cName.size() <= 25)
	{
		courseName = cName;
	}
	else
	{
		courseName = cName.substr(0,25);
		cerr << "Name \"" << cName << "\" exceeds maximum length (25).\n"
		     << "Limiting courseName to first 25 characters. \n" << endl;
	}

	if(iName.size() <= 10)
	{
		instructorName = iName;
	}
	else
	{
		instructorName = cName.substr(0,10);
		cerr << "Name \"" << cName << "\" exceeds maximum length (10).\n"
		     << "Limiting instructorName to first 10 characters. \n" << endl;
	}
}
string GradeBook::getCourseName(void) const
{
	return courseName;
}
string GradeBook::getInstructorName(void) const  
{
	return instructorName;
}
void GradeBook::gradeDisplay() const
{
	cout << "Welcome to the grade book for\n" << getCourseName() << "!" <<endl;
	cout << "This course is presnted by: \n" << getInstructorName() << "!" <<endl;
}