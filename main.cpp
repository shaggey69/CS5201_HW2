#include <iostream>
#include <fstream>
#include <vector>
#include "polar.h"
#include "norm.cpp"

using namespace std;
int main()
{	
	int numOfCases = 0;
	float tempR = 0;
	float tempTheta = 0;

	ifstream theFile;
	theFile.open("input_dataset2");
	theFile >> numOfCases;
	cout << numOfCases;

	vector<Polar<float> > polarVect;

	for (int i = 0; i < numOfCases ; i++)
	{
		theFile >> tempR;
		theFile >> tempTheta;
		Polar<float> tempPolar(tempR,tempTheta);
		polarVect.push_back(tempPolar);
	}	

	cout << polarVect;
	return 0;
}