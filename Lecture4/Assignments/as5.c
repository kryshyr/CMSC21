/****************************
 *  SALURIA, PRECIOUS KAIRA *
 *   Lecture 4: as5         *
 ****************************/

#include <stdio.h>

// PROGRAM THAT DISPLAYS A ONE MONTH CALENDAR
int main(void)
{
    int days, start, i, k;

    // input validation for number of days
    do{
        printf("\nEnter number of days in month: ");
        scanf("%d", &days);
        if (days <=27 || days >= 32)
            printf ("Error: Invalid number of days! Please try again.\n");
    } while (days <=27 || days >= 32);

     // input validation for starting day of the week
    do{
        printf("\nEnter starting day of the week (1=Sun, 7=Sat): ");
        scanf("%d", &start);
        if (start < 0 || start > 7)
            printf ("Error: Invalid input! Please try again.\n");
    } while (start < 0 || start > 7);

    printf("\n\n   S   M   T   W   TH   F  S\n\n");
    
    // to print the blank days of the first week
    for (i = 1; i < start; i++) { 
        printf("    ");
    }

    // prints the calendar numbers
    for (k = 1; k <= days; i++, k++) {
        printf("%4d", k);

        // checks whether i is the last day of the week
        if (i % 7 == 0)
            printf("\n");   // prints a new-line character every 7 days
    }
    printf ("\n\n");
    return 0;
}