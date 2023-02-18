/*
* FILE          : f3.cpp
* PROJECT       : Focused Assignment 3
* PROGRAMMER    : Het Patel 8830794
* FIRST VERSION : 2023 - 02 - 17
* DESCRIPTION   : This program prompts the user for ten numbers
and determines which is the lowest number and it's index value.
*/

#include <stdio.h>

int getNum(void); //Function prototype

int main()	{

	int numbers[10]; //Declaring the arrray
	int indexValue = 0;
	int min = 2147483647;

	printf("Enter ten numbers of your choice:\n");
	for (int j = 0; j < 10; j++) {  //Loop for multiple user input
		numbers[j] = { getNum() };

		if (numbers[j] < min) {  //Condition for deriving the lowest value
			min = numbers[j];
			indexValue = j;
		}
	}

	printf("The lowest value is %d at index %d\n", min, indexValue);

	return 0;
}


#pragma warning(disable: 4996) // required by Visual Studio


/*
* FUNCTION    : getNum()
* DESCRIPTION : This function requests input form the user.
* PARAMETERS  : There is no parameter for this function.
* RETURNS     : int: The number user entered. If the user entered
				an invalid number, it would be -1.
*/
int getNum(void) {

	/* the array is 121 bytes in size; we'll see in a later
	   lecture how we can improve this code */
	char record[121] = { 0 }; // record stores the string 
	int number = 0;

	/* NOTE to student: brace this function consistent
	   with your others */
	   /* use fgets() to get a string from the keyboard */
	fgets(record, 121, stdin);

	/* extract the number from the string; sscanf()
	   returns a number corresponding with the number of
	   items it found in the string */
	if (sscanf(record, "%d", &number) != 1)
	{
		/* if the user did not enter a number recognizable
		   by the system, set number to -1 */
		number = -1;
	}
	return number;
}