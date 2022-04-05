/****************************
 *  SALURIA, PRECIOUS KAIRA *
 *   Lecture 4: as2         *
 ****************************/

#include <stdio.h>

//checks the output if i > 10
int main(void)
{
    // while loop
    int i = 15;
    printf ("A: ");
    while (i < 10) {
        printf ("%d ", i);
        ++i;
    } 

    // for loop
    i = 15;
    printf ("\nB: ");
    for (; i < 10;) {
        printf ("%d ", i);
        ++i;
    } 

    // do-while loop
    i = 15;
    printf ("\nC: ");
    do{
        printf ("%d ", i);
        ++i;
    }  while (i < 10);

    return 0;
}
