#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip> 
#include "polar.h"
#include "norm.cpp"

using namespace std;
int main(int argc, char *argv[])
{	
	ifstream in;
	int num_of_paris = 0 ;
	double tempP = 0 , tempT = 0;
	vector<Polar<double> > polarVect;

	in.open(argv[1]);
	argc = -1;
	in >> num_of_paris;

	for (int i = 0; i < num_of_paris ; i++)
	{
		in >> tempP ;
		in >> tempT ;
		Polar<double> tempPolarPair (tempP,tempT);
		polarVect.push_back(tempPolarPair);

	}
	cout << setprecision(12);
	cout << polarVect[0]/polarVect[1] << endl;
	cout << polarVect[2]*polarVect[3] << endl;
	cout << !polarVect[4] << endl;
	Norm <double> my_norm;
	cout << my_norm(polarVect) << endl;

	return 0;
}