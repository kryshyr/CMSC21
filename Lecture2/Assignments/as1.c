#include<stdio.h>

// PROGRAM TO REVERSE A 2-DIGIT NUMBER

	int main()
	{
		int num, rem;
	
		printf("Enter the 2-digit number: ");
		scanf("%d",&num);

		/* PRINTING THE REVERSE BY PERFORMING REVERSE OPERATION WITH BOTH VARIABLE */
		printf("Reversed Number: "); 

		rem = num % 10;  			// using the modulus operator (%) to split the last digit of the number
		printf("%d",rem);

        num /= 10;  				// integer division to return the first digit
		printf("%d",num);

		return 0;
	}