/*
	Title:  donut.cpp
	Author:  Moyinoluwa Ojo
	Date:  Friday, April 7, 2017
	Purpose:  Program to analyze how purchase and eating habits of students participiating 
	          in a donut survey.
	
*/


#include "donut.h"
#include "arrayHeader.h"
int main()
{
    int size;
	int largest;
	int lowest;
	int totalD;
	float average;
	int locationMod;
	int typeMod;
	string locationIs;
	string typeIs;
	
	cout << "How many students were surveyed? ";
    cin >> size;	
	
	while((size < 1) || !cin)   
	{
		cin.clear(); //this clears all bad flags that were thrown from the last read
		cin.ignore(numeric_limits<streamsize>::max(),'\n');  //clear the keyboard buffer
		cout << "Invalid input. Please enter a positive number. " << endl;
		cout << "\nHow many students were surveyed? ";
		cin >> size;
	}
	
	
	
	
	
	cout << "\n\nPlease enter the following data about the students surveyed." << endl <<endl;
    cout << "For each student enter the number of donuts purchased last month,  favorite place to purchased donuts, and favorite kind.";
	cout << endl <<endl;
	
	int* numDonuts = makeArray(size);
	int* typeDonuts = makeArray(size);
	int* location  =  makeArray(size);
	
	enterData(numDonuts, location, typeDonuts, size);
    largest = getLargest(numDonuts,size);
	lowest = getLowest(numDonuts,size);
	totalD = getTotal(numDonuts,size);
	locationMod = getMode(location, size);
	typeMod = getMode(typeDonuts, size);
	average = (float)totalD/(float)size;
	switch (locationMod)
		{
            case 1: locationIs="Dunkin Donuts" ;
				break;
			case 2: locationIs = "Ralph Donuts";
				break;
			case 3: locationIs= " Big O's Donuts";
				break;
			case 4: locationIs="Krispy Kreme" ;
				break;
			case 5: locationIs = "Other";
				break;
			case -1: locationIs= "None (no mode)";
				break;	
        }
		
		switch (typeMod)
		{
            case 1: typeIs="Glazed" ;
				break;
			case 2: typeIs = "Blueberry";
				break;
			case 3: typeIs= "Chocolate";
				break;
			case 4: typeIs="Holes" ;
				break;
			case 5: typeIs = "Powdered";
				break;
			case 6: typeIs = "Filled";
				break;
			case -1:typeIs = "None (no mode)";
				break;	
        }
	
	cout <<fixed << setprecision(4);
	
	cout << right<<setw(40) <<"LARGEST NUMBER  OF DONUTS EATEN: "<<setw(15)<< largest<<endl;	
	cout << right<< setw(40)<< "SMALLEST NUMBER OF DONUTS EATEN: " <<setw(15)<< lowest<<endl;
	cout << right<<setw(40)<< "TOTAL NUMBER OF DONUTS EATEN:  " <<setw(15)<< totalD<<endl;
	cout << right<<setw(40)<< "AVERAGE NUMBERS OF EATEN: " <<setw(15)<<  average<<endl;
	cout << right<<setw(40)<<  "MOST POPULAR DONUT LOCATION: " <<setw(15)<< locationIs<< endl;
	cout << right<<setw(40)<<"MOST POPULAR DONUT TYPE: "<< setw(15)<< typeIs<< endl;

	
	delete [] location, typeDonuts, numDonuts;
	return 0;
	
}	