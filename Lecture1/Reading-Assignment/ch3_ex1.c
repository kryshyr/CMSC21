// PROGRAM TO PRINT VALUES IN DIFFERENT CONVERSIONS

#include <stdio.h>
int main(void)
{ 
    // variable declaration
    int i, j;
    float x, y;

    // initialization of variables
    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    // conversion specifications are replaced by the values to be printed
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
}