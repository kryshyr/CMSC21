// PROGRAM TO ADD TWO FRACTIONS 

#include <stdio.h>
int main (void)
{
    // variable declaration
    int num1, denom1, num2, denom2, result_num, result_denom;

    // get the inputs for first fraction from user
    printf ( "Enter first fraction: ") ;
    scanf ( "%d/ %d" , &num1, &denom1) ;

    // get the inputs for second fraction from user
    printf ( "Enter second fraction: " ) ;
    scanf ( " %d/ %d" , &num2, &denom2) ;

    // calculating the numerator
    result_num = num1 * denom2 + num2 * denom1; 

    // calculating the denominator
    result_denom = denom1 * denom2; 

    /* to display the output
    note: fraction is not in lowest term */
    printf ( "The sum is %d/%d\n", result_num, result_denom);

    return 0;
} 