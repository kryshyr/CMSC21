// PROGRAM TO PRINT INT AND FLOAT VALUES IN VARIOUS FORMATS


#include <stdio.h>
int main (void)
{
    // variable declaration
    int i;
    float x;

    // initialization of variables
    i =  40;
    x = 839.21f;

    /* printing of variables in different formats with the help of | character
    to show the spaces that each number occupies */
    printf ("|%d|%5d|%5.3d|\n", i, i, i, i );
    printf ("|%10.3f|%10.3e|%-10g| \n" , x, x, x );

    return 0;
}