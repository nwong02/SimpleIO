/*
* Title			: Sample.cpp
* Project		: SimpleIO
* Author		: Nelson Wong
* Description	: Example of simple file I/O using Savitch & Mock - Problem Solving with C++ (2017), Display 6.1 with slight modifications
*/

#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
	ifstream input;
	ofstream output;

	input.open("inputFile.txt");
	output.open("outputFile.txt");

	double first = 1.0;
	double second = 3.0;
	double third = 6.0;
	double fourth = 10.0;
	double average = (first + second + third + fourth) / 4.0;

	input >> first >> second >> third >> fourth;
	output << "The average of the four numbers is " << average << endl;
	
	input.close();
	output.close();

	return 0;
}