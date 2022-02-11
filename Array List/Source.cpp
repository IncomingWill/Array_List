/*
Title: Chapter Twelve List Program
Created by William Schaeffer
CPS 362
P. 905-906, Challenge 6 and 10, List Program
2.10.2022
*/

//This program will demonstrate the updated arrayListType and derived unorderedArrayListType Classes

#include <iostream>
#include <string>

#include "arrayListType.hpp"
#include "unorderedArrayListType.hpp"

using std::cout;															//using specific calls instead of including all of napespace
using std::endl;
using std::cin;
using std::string;

//Function Prototypes

void welcomeUser();															//Function to welcome user
char inputValidation(char&);												//Function for input validation

int main()

{
	char runAgain = 'Y';													//Initialize variable to run program again, default to yes to start

	welcomeUser();															//Call introduction function

	while (toupper(runAgain) == 'Y')										//While 'Y', run program, else quits

	{
		
		//do stuff here

		cout << "\n\nWould you like to run program again? Please enter 'Y' or 'N':\n\n";

		cin >> runAgain;

		cout << endl;

		runAgain = inputValidation(runAgain);    							//User Validation of 'Y' or 'N'

		//uncomment next three lines with code to verify that mutator function 'set' functions properly. Sets to zeros.


	}

	cout << "\nThank you for using the Program.";

	return 0;

}

//Function Definitions

//Introduce User to Program

void welcomeUser()
{
	cout << "\tWelcome to the program.\n\n"
		<< "a\n"
		<< "b\n"
		<< "c\n\n";
}

//User input validation for selections, must be 'Y' or 'N'

char inputValidation(char& input)
{
	while (toupper(input) != 'Y' && toupper(input) != 'N')    				//convert y or n to Y or N, do not accept any other input
	{
		cout << endl << "Please enter 'Y' or 'N':\n\n";
		cin >> input;
		cin.ignore();
	}

	return input;

}
