#include "TestingCases.h"

void getData(string& newName, int& newNumber, double& newUnits,
	vector<int>& newPrereqs, char& transfers, int idx)
{
	string names[] = { "Python Programming I",
		"C#.NET Programming",
		"C++ Programming I",
		"Java Programming I",
		"Data Structures",
		"Computer Architecture",
		"Software Engineering",
		"Python Programming II",
		"Computer Organization and Assembly Language",
		"C++ Programming II",
		"Boolean Algebra & Logic",
		"Discrete Structures",
		"Probability & Stats for CS",
		"Java Programming II",
		"Mobile Application Development",
	};

	int numbers[] = { 131, 140,	150, 170, 200, 
		216, 220, 231, 242, 250, 
		257, 262, 263, 272, 273 };

	int units[] = { 4, 4, 4, 4,	4, 
		4, 4, 4, 4, 4, 
		3, 3, 4, 4, 4 };

	// More than one prerquisite: AND
	vector<vector<int>> prereqs = { { 170 },	//Python Programming I
		{ },									//C#.NET Programming
		{ 170 },								//C++ Programming I
		{ },									//Java Programming I
		{ 250 },								//Data Structures
		{ 150, 170 },							//Computer Architecture
		{ 150, 170 },							//Software Engineering
		{ 131 },								//Python Programming II
		{ 170 },								//Computer Organization and Assembly Language
		{ 150, 170 },							//C++ Programming II
		{ 150 },								//Boolean Algebra & Logic
		{ 150 },								//Discrete Structures
		{ 262 },								//Probability & Stats for CS
		{ 170 }, 								//Java Programming II
		{ 272 }, 								//Mobile Application Development
	};

	char transfer[] = { 'Y', 'Y', 'Y', 'Y',
		'Y', 'Y', 'Y', 'Y',
		'Y', 'Y', 'Y', 'Y',
		'Y', 'Y', 'N' };

	newName = names[idx];
	newNumber = numbers[idx];
	newUnits = units[idx];
	newPrereqs = prereqs[idx];
	transfers = transfer[idx]; 
}