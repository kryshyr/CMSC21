#include<stdio.h>

// PROGRAM TO REVERSE A 3-DIGIT NUMBER

	int main()
	{
		int num, rem;
		
		printf("Enter the 3-digit number: ");
		scanf("%d",&num);
		
		/* PRINTING THE REVERSE BY PERFORMING REVERSE OPERATION WITH BOTH VARIABLE */
		printf("Reversed Number: ");

		rem = num % 10;				// using the modulus operator (%) to obtain the last digit of the number
		printf("%d",rem);

		num /= 10; 					// reducing the number to 2-digits and assigning the result as new value for num variable
		rem = num % 10; 
        printf ("%d",rem);

        num /= 10; 					// integer division to return the first digit
		printf("%d",num);

		return 0;
	}