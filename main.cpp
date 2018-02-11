/*
Main.cpp file for Polar exersise 
By: Ari Sherman
Class: CS5201 HW #2
Date: 2.12.18
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip> 
#include "polar.h"
#include "norm.cpp"


using namespace std;
int main(int argc, char *argv[])
{	
	// var declartion 
	ifstream in;
	int num_of_paris = 0 ;
	double tempP = 0 , tempT = 0;
	vector<Polar<double> > polarVect;

	//checking for num of inputs from command line
	if (argc < 2)
    cout << endl << "not enough inputs :(" << endl ;
  else  if (argc > 2)    
    cout << endl << "too many inputs :(" << endl ;
  else
  {
		// opening the file from command line		
		in.open(argv[1]);
		argc = 0;
		in >> num_of_paris;

		//checking if file stream was sucessful
  	if (!in) 
    	cout << endl << "invailed file :("  << endl;
		else
		{
			//filling the vector with the Polars from file

			for (int i = 0; i < num_of_paris ; i++)
			{
				in >> tempP ;
				in >> tempT ;
				Polar<double> tempPolarPair (tempP,tempT);
				polarVect.push_back(tempPolarPair);
			}

			if (polarVect.size() < 5)
				cout << "not enough inputs in file! sorry :(" << endl ;
			else
			{
				//output
				cout << setprecision(8);
				cout << polarVect[0]/polarVect[1] << endl;
				cout << polarVect[2]*polarVect[3] << endl;
				cout << !polarVect[4] << endl;
				Norm <double> my_norm;
				cout << my_norm(polarVect) << endl;
			}
		}
	}

	in.close();

	return 0;

}