/****************************
 *  SALURIA, PRECIOUS KAIRA *
 *  pbsaluria@up.edu.ph     *
 ****************************/

/*  \\ =＾● ⋏ ●＾= // */

#include<stdio.h>
#include<stdbool.h>

int main()
{
    int age;
    bool teenager;

    printf("Enter the 2-digit number: ");
    scanf("%d",&age);

    // if statement to check if age is in range 13-19
    if (age >= 13 && age <= 19) {teenager = true;}
    
    // printing whether result is true or false
    printf("Teenager: %s\n", teenager ? "True" : "False");

    return 0;
}