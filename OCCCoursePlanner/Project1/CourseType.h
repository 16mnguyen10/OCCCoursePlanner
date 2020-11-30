/*
	Nguyen, Michael

	May 6, 2019
*/

#ifndef COURSETYPE_H
#define COURSETYPE_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class CourseType
{
public:
	CourseType();
	CourseType(const string& courseName,
		int courseNumber, double courseUnits);

	string getCourseName() const;
	int getCourseNumber() const;
	double getCourseUnits() const;
	static string getPrefix();

	void setCourseName(const string& courseName);
	void setCourseNumber(int courseNumber);
	void setCourseUnits(int courseUnits);

	void printCourse() const;

	~CourseType();

private:
	string courseName;
	int courseNumber;
	double courseUnits;
	static string PREFIX; 
};
#endif