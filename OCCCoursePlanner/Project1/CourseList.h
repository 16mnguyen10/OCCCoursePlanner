/*
	Nguyen, Michael

	May 6, 2019
*/

#ifndef COURSELIST_H
#define COURSELIST_H

#include "Course.h"

class Node
{
public:
	Node() : course(), next(nullptr) {}
	Node(const Course& newCourse, Node *newNext)
		: course(newCourse), next(newNext) {}
	Course getCourse() const { return course; }
	Node* getNext() const { return next; }
	void setCourse(const Course& newCourse) { course = newCourse; }
	void setNext(Node *newNext) { next = newNext; }
	~Node() {}
private:
	Course course;
	Node *next;
};

/*
* The copy constructor and the overloaded assignment 
* operator should be included in this class, because the 
* object points to dynamic data. 
*/

class CourseList
{
public:
	CourseList();

	void addCourse(const string&, int, double, vector<int>&, char);

	bool isEmpty() const;
	bool searchCourse(int) const;

	void printAllCourses() const;
	void printTransferCourses() const;
	void printVocationalCourses() const;
	void printCourseByNumber(int) const;
	void printPrereqs(int) const;

	void clearList();

	~CourseList();
private:
	Node* getCourseLocation(int) const;
	
	Node *first;
	Node *last;
	int count;
};
#endif