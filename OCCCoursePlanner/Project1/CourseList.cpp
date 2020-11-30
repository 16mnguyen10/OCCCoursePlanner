/*
	Nguyen, Michael

	May 6, 2019
*/

#include "CourseList.h"

// Default constructor
CourseList::CourseList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

// Definition function to add course
void CourseList::addCourse(const string& name, int number,
	double units, vector<int>& prere, char transferable)
{
	Course course(name, number, units, prere, transferable);
	Node *newCourse = new Node;
	newCourse->setCourse(course);
	Node *current = first;

	if (current == nullptr)
		first = newCourse;
	else 
	{
		while (current->getNext() != nullptr)
		{
			current = current->getNext();
		}

		current->setNext(newCourse);
	}

	last = newCourse;
	count++;
}

// Definition function to see if course is empty
bool CourseList::isEmpty() const
{
	return (count == 0? true:false);
}

// Definition function to find the course
bool CourseList::searchCourse(int num) const
{
	Node *current = first;

	while (current != nullptr)
	{
		if (current->getCourse().getCourseNumber() == num)
			return true;

		current = current->getNext();
	}

	return false;
}

// Definition function to display all CS courses at OCC
void CourseList::printAllCourses() const
{
	Node *current = first;

	while (current != nullptr)
	{
		cout << (current->getCourse()).getPrefix()
			<< (current->getCourse()).getCourseNumber()
			<< " - " << (current->getCourse()).getCourseName() << endl;
		current = current->getNext();
	}
}

// Definition function to display all the transferable courses
void CourseList::printTransferCourses() const
{
	Node *current = first;

	while (current != nullptr)
	{
		if ((current->getCourse()).isTransferable())
			cout << (current->getCourse()).getPrefix()
			<< (current->getCourse()).getCourseNumber()
			<< " - " << (current->getCourse()).getCourseName() << endl;

		current = current->getNext();
	}
}

// Definition function to display vocational courses
void CourseList::printVocationalCourses() const
{
	Node* current = first;

	while (current != nullptr)
	{
		if (!((current->getCourse()).isTransferable()))
			cout << (current->getCourse()).getPrefix()
			<< (current->getCourse()).getCourseNumber()
			<< " - " << (current->getCourse()).getCourseName() << endl;

		current = current->getNext();
	}
}

// Definition function to display the course's name that the user inputted
void CourseList::printCourseByNumber(int num) const
{
	getCourseLocation(num)->getCourse().printCourse();
}

// Getting the prerequisites of a class
void CourseList::printPrereqs(int num) const
{
	getCourseLocation(num)->getCourse().printPrereqs();
}

// Clearing up the list
void CourseList::clearList()
{
	Node* current = first;

	while (current != nullptr)
	{
		if (current->getNext() != nullptr)
		{
			first = current->getNext();
			delete current;
			current = first;
		}
		else
		{
			delete current;
			current = nullptr;
		}
	}

	count = 0;
}

CourseList::~CourseList()
{
	clearList();
}


// Definition function getCourseLocation
Node* CourseList::getCourseLocation(int num) const
{
	Node *current = first;

	while (current != nullptr)
	{
		if (current->getCourse().getCourseNumber() == num)
			return current;

		current = current->getNext();
	}
}