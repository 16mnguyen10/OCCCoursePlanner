/*
	Nguyen, Michael

	May 6, 2019
*/

#include "Interface.h"

void displayMenu()
{
	cout << "**************************************************************\n"
		<< "                          MAIN MENU\n"
		<< "**************************************************************\n";
	cout << "\nSelect one of the following:\n\n";
	cout << "    1: Print all courses" << endl;
	cout << "    2: Print all transfer courses" << endl;
	cout << "    3: Print all vocational courses" << endl;
	cout << "    4: Print course by course number" << endl;
	cout << "    5: Print course prerequisites" << endl;
	cout << "    6: To exit" << endl;
}

void processChoice(CourseList& courseList)
{
	int choice = 0;

	cout << "\nEnter your choice: ";
	cin >> choice;
	cout << endl;

	while (choice != 6)
	{
		int courseNumber = 0;

		switch (choice)
		{
		case 1:
			if (!courseList.isEmpty())
			{
				cout << "--------------------------------------------------------------\n"
					<< "                          CS COURSES\n"
					<< "--------------------------------------------------------------\n\n";
				courseList.printAllCourses();
			}
			else
				cerr << "  => There are no courses in the list." << endl;
			break;

		case 2:
			if (!courseList.isEmpty())
			{
				courseList.printTransferCourses();
			}
			else
				cerr << " => There are no courses in the list.\n";
			break;

		case 3:
			if (!courseList.isEmpty())
			{
				courseList.printVocationalCourses();
			}
			else
				cerr << " => There are no courses in the list.\n";
			break;

		case 4: 
			cout << "  => Enter course number (enter only numbers: 150, 250...): ";
			cin >> courseNumber;
			cout << endl;

			if (!courseList.isEmpty())
			{
				if (courseList.searchCourse(courseNumber))
				{
					cout << "  => ";
					courseList.printCourseByNumber(courseNumber);
				}
				else
					cout << "  => Course number " << courseNumber
					<< " is invalid." << endl;
			}
			else
				cerr << "  => There are no courses in the list." << endl;
			break;

		case 5:
			cout << "  => Enter course number (enter only numbers: 150, 250...): ";
			cin >> courseNumber;
			cout << endl;

			if (!courseList.isEmpty())
			{
				if (courseList.searchCourse(courseNumber))
				{
					cout << "  => ";
					courseList.printPrereqs(courseNumber);
				}
				else
					cout << "  => Course number " << courseNumber
					<< " is invalid." << endl;
			}
			else
				cerr << "  => There are no courses in the list." << endl;
			break;

		default:
			cout << "  => Sorry. That is not a selection." << endl;
			break;
		}

		cout << "\n==============================================================\n\n";
		system("Pause");
		cout << endl;
		displayMenu();

		cout << "\nEnter your choice: ";
		cin >> choice;
		cout << endl;
	}		
	
	if (choice == 6)
		cout << "Thank you for using my software."
		<< " Good bye!\n";
}

