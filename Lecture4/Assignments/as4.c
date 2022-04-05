/****************************
 *  SALURIA, PRECIOUS KAIRA *
 *   Lecture 4: as4         *
 ****************************/

#include<stdio.h>

// PROGRAM THAT COMPUTES FOR THE POWER OF TWO
int main(){
   int power, counter, base = 2, value = 1;

   printf("Enter n: ");
   scanf("%d", &power);

   /* calculating the power of two by 
   repetitively multiplying the base */
   for(counter = 0; counter < power; counter++){
         value *= base;
   }

   printf("2^%d = %ld", power, value);
   return 0;
}