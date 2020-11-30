/*
	Nguyen, Michael

	May 6, 2019
*/

#ifndef COURSE_H
#define COURSE_H

#include "CourseType.h"
#include <vector>
using namespace std;

class Course : public CourseType
{
public:
	Course();
	Course(const string&, int, double, vector<int>&, char);

	bool isTransferable() const;

	void setTransfer(char);
	void setPrerequisites(const int[], int);

	void printCourse() const;
	void printPrereqs() const;

	~Course();
private:
	vector<int> preCourse;
	char transferable;
};
#endif