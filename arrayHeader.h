/*
	Title:  arrayHeader.h
	Author:  Moyinoluwa Ojo
	Date:  Friday, April 7, 2017
	Purpose:  Program to analyze how purchase and eating habits of students participiating 
	          in a donut survey.
	
*/


#ifndef ARRAYHEADER_H
#define ARRAYHEADER_H
#include <iostream>
using namespace std;


/*
	Purpose: Creates an array 
	Pre-Conditions:  pointer to integer array and size of array
	Post-Conditions:  none
*/
int* makeArray(int);

/*
	Purpose: Locates the smallest value in an array
	Pre-Conditions:  pointer to integer array & size of the array
	Post-Conditions:  Returns the smallest integer in the array
*/

int getLowest(int* , int );


/*
	Purpose: Locates the largest value in an array
	Pre-Conditions:  pointer to integer array & size of the array
	Post-Conditions:  Returns the largest integer in the array
*/

int getLargest(int* , int );

/*
	Purpose: Adds up all the elements of an array
	Pre-Conditions:  pointer to integer array & size of the array
	Post-Conditions:  Returns the integer sum of all the elements of the array
*/

int getTotal(int*, int);

/*
	Purpose: Locates the number that appears the most in an array or indentifies there isn't one.
	Pre-Conditions:  pointer to integer array & size of the array
	Post-Conditions:  Returns the integer that occurs the most
*/


int getMode(int* , int );
#endif
