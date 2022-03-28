/****************************
 *  SALURIA, PRECIOUS KAIRA *
 *  pbsaluria@up.edu.ph     *
 ****************************/

/*  \\=＾● ⋏ ●＾//  = */

#include<stdio.h>
#include<stdbool.h>

int main()
{
    int age;
    bool teenager;

    printf("Enter the 2-digit number: ");
    scanf("%d",&age);

    // if staement to check if age is between the range 13-19
    if (age >= 13 && age <= 19) {teenager = true;}

    // printing whether true or false
    printf("Teenager: %s\n", teenager ? "True" : "False");

    return 0;
}