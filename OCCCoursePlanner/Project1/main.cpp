/*
	Nguyen, Michael

	May 6, 2019
*/

/*
	This program is to help navigate through all of the computer science classes
	that are offered at Orange Coast College. It will display every course along with
	the class' prerequisites and credits. This is a useful program in order to
	help students plan courses efficiently for the following terms up until graduation.
*/

#include "CourseType.h"		
#include "Course.h"
#include "CourseList.h"
#include "Testing.h"
#include "TestingCases.h"
#include "Interface.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	/********************************************************
	*	TESTING database
	********************************************************/
	CourseList courseList;
	createCourseList(courseList);
	displayMenu();
	processChoice(courseList);

	cout << endl;
	system("Pause");
	return 0;

}