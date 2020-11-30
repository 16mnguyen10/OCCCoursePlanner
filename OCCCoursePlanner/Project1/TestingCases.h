#ifndef TESTINGCASES_H
#define TESTINGCASES_H

#include <string>
#include <vector>
using namespace std;

const int TOTAL_CLASSES = 15;

void getData(string& newName, int& number, double& newUnits,
	vector<int>& newPrereqs, char& transfers, int idx);

#endif
