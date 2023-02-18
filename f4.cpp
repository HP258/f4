#include <stdio.h>

int getNum(void);

int main()	{

	int numbers[10];
	int indexValue = 0;
	int min = 2147483647;

	printf("Enter ten numbers of your choice:");
	for (int j = 0; j < 10; j++) {
		numbers[j] = { getNum() };

		if (numbers[j] < min) {
			min = numbers[j];
			indexValue = j;
		}
	}
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