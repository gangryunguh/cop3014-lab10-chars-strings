#include <fstream>
#include <iostream>
using namespace std;

// Usage of stream ignore() and get() methods

const int MAXNAME = 20;

int main()
{
	ifstream inData;
	inData.open("grades.txt");

	char name[MAXNAME + 1];	// holds student name 
	float average;			// holds student average

	inData.get(name, MAXNAME + 1);

	while (inData)
	{
		inData >> average;

		// Fill in the code to print out name and
		// student average

		// Fill in the code to complete the while
		// loop so that the rest of the student
		// names and average are read in properly
	}

	return 0;
}