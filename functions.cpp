/*
	Title:  functions.cpp
	Author:  Moyinoluwa Ojo
	Date:  Friday, April 7, 2017
	Purpose:  Program to analyze how purchase and eating habits of students participiating 
	          in a donut survey.
	
*/


#include "donut.h"
  /* This functions allows the user to enter the information into arrays that will
     be used throughout the program
	*/ 
  void enterData(int* num1, int* num2, int* num3, int size)
  {
	  for(int x=0; x < size; x++)
	  {  cout << "\nStudent " <<(x+1) << "--------------------";
	     cout << "\nNUMBER EATEN:  ";
		 cin >> *(num1 + x);
	    
		while((*(num1+x) < 1) || !cin)   
	{
		cin.clear(); 
		cin.ignore(numeric_limits<streamsize>::max(),'\n');  
		cout << "Invalid input. Please enter a positive number" <<endl;
		cout << "\nNUMBER EATEN:  ";
		cin >> *(num1+x);
	}	
	
		 cout << "\nFAVORITE PLACE(1=Dunkin, 2=Ralphs, 3=BigOs, 4=KrispyKreme, 5=Other):   ";
		 
		 cin >> *(num2 + x);
		 
		while((*(num2+x) < 1 || *(num2+x) > 5) || !cin)   
	{
		cin.clear(); 
		cin.ignore(numeric_limits<streamsize>::max(),'\n');  
		cout << "Invalid input. Please enter 1,2,3,4,or 5." <<endl;
		cout << "\nFAVORITE PLACE(1=Dunkin, 2=Ralphs, 3=BigOs, 4=KrispyKreme, 5=Other):   ";
		cin >> *(num2+x);
	}	

		 cout << "\nFAVORITE TYPE\n(1=glazed, 2=blueberry, 3=chocolate, 4=holes, 5=powdered, 6=filled):   ";
		 
		 
		 
		 cin >> *(num3 + x);
		 
		while((*(num3+x) < 1 || *(num3+x) > 6) || !cin)   
	{
		cin.clear(); 
		cin.ignore(numeric_limits<streamsize>::max(),'\n');  
		cout << "Invalid input. Please enter 1,2,3,4,5, or 6." <<endl;
		cout << "\nFAVORITE TYPE\n(1=glazed, 2=blueberry, 3=chocolate, 4=holes, 5=powdered, 6=filled):   ";
		 
		cin >> *(num3+x);
	}	

	   }
    
  


  }  

