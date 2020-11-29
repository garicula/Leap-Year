// Garrick Morley
// CPSC 200 Practice
// This program tests if a year is a leap year

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cmath>
#include <fstream>
using namespace std;

//create isLeapYear function
bool isLeapYear(int year)
{
	//while loop for the function
	while (1 > 0)
	{
    if (year != 0)
    {
    	if (year % 4 == 0)
    	{
        	if (year % 100 == 0)
        	{
            	if (year % 400 == 0)
                	return true;
            	else
                	return false;
        	}
        	else
            	return true;
    	}
    	else
        	return false;
    }
    	//cancels if they pick 0
    	else
    	{
    		return false;
    		break;
		}
    }
}

//start main function
main()
{
	//decalre variables
	int year;

//do-while loop 	
do
{
	cout << "Enter a year (0 to stop): ";
    cin >> year;
	
	//what to do if it is a leap year
	if (isLeapYear(year))
	{
		cout << year << " is a leap year." << endl;
	}
	//what to do if it is a leap year
	else
	{
		cout << year << " is not a leap year." << endl;
	}
}

while (year != 0);
}
