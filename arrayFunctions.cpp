/*
	Title:  arrayFunctions.cpp
	Author:  Moyinoluwa Ojo
	Date:  Friday, April 7, 2017
	Purpose:  Program to analyze how purchase and eating habits of students participiating 
	          in a donut survey.
	
*/

#include "arrayHeader.h"


int* makeArray(int SIZE)
{
	int* makeArray = new int [SIZE];
	
	return makeArray;

	}

	
	
int getLargest(int *num, int SIZE)
	
{
     int count;
     int highest;
     highest = *(num);
     for (count = 0; count < SIZE; count++)
     {
       if (*(num + count) > highest)
	     highest = *(num + count); 
	 }
	 
	 return highest;
}
	 
	 
	 
	 
	 int getLowest(int *num, int SIZE)
	
{
     int count;
     int lowest;
     lowest = *(num);
     for (count = 0; count < SIZE; count++)
     {
       if (*(num + count) < lowest)
	     lowest = *(num + count); 
	 }
	 
	 return lowest;
}
	 
	 

	 
	  int getTotal(int *num, int SIZE)
	
{
     int count;
     int total;
	 total=0;
        
     for (count = 0; count < SIZE; count++)
     {
       
	     total = total + *(num + count); 
	 }
	 
	 return total;
}
	 
	  
	  int getMode(int* num, int SIZE) // Brings in array and the size
	
{
        
	   int modeFind;
	   int modeLoc = 0;
	   int modeValue;
        
       int* mode = new int [SIZE]; // Dynamically create an array to hold modes
	   
	   for (int count = 0; count < SIZE; count++) // Sets Array elements to 0
	   {  *(mode+count) = 0;
	   }
	 
     for ( int index = 0; index < SIZE; index++) //Loop for each element to pass through the mode array creator
    {
		for (int x = 0; x < SIZE; x++) //Compare one element in mode to every element
		{		
         if ((*(num+x) == *(num+index)) )
		 { 
	         *(mode+index) = *(mode+index) + 1;
		                                          } 
	     }
	  
    }
        modeFind = 0; // Set up a variable to run max function on the mode array
    for (int lime = 0; lime < SIZE; lime++) //Compare every element of mode to find highest value
       {
       if ((*(mode + lime) > modeFind ))
	   { modeFind = *(mode+lime);
         modeLoc = lime;                      //Mode location as it pertains to the num array
		 }
		 
	     }
	     
	 
	  if (modeFind == 1)
	  { 
          modeValue = -1;
	       
	  } 
	  else
	  {modeValue= *(num+modeLoc);
	  }
		return modeValue;
	
	 delete [] mode;
	}
	 
       
    