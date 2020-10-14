#include <iostream>
#include <string>

class GradeBook{
	std::string courseName;
	std::string instructorName;
public :
	GradeBook(std::string , std::string) ;
	void setName(std::string , std::string) ;
	std::string getCourseName(void) const ;
	std::string getInstructorName(void) const ;
	void gradeDisplay() const ;
};