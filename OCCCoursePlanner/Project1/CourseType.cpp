/*
	Nguyen, Michael

	May 6, 2019
*/

#include "CourseType.h"
using namespace std;

string CourseType::PREFIX = "CS A";
CourseType::CourseType()
{
	courseName = "No name assigned.";
	courseNumber = 0;
	courseUnits = 0.0;
}

CourseType::CourseType(const string& courseName,
	int courseNumber, double courseUnits)
{
	this->courseName = courseName;
	this->courseNumber = courseNumber;
	this->courseUnits = courseUnits;
}

string CourseType::getCourseName() const
{
	return courseName;
}

int CourseType::getCourseNumber() const
{
	return courseNumber;
}

double CourseType::getCourseUnits() const
{
	return courseUnits;
}

string CourseType::getPrefix()
{
	return PREFIX;
}

void CourseType::setCourseName(const string& courseName)
{
	this->courseName = courseName;
}

void CourseType::setCourseNumber(int courseNumber)
{
	this->courseNumber = courseNumber;
}

void CourseType::setCourseUnits(int courseUnits)
{
	this->courseUnits = courseUnits;
}

void CourseType::printCourse() const
{
	cout << getPrefix() << getCourseNumber() << " - "
		<< getCourseName() << " (" << fixed << showpoint << 
		setprecision(2) << getCourseUnits() << " units)" << endl;
}

CourseType::~CourseType()
{
}