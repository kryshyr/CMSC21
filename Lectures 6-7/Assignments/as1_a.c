/******************************
 *  SALURIA, PRECIOUS KAIRA   *
 * LECTURE 6-7 ASSIGNMENT #1A *
 ******************************/

#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway) / sizeof (pathway[0])))

int main (){

    /*

    A boolean array that contains true/false values reffering to
    whether a certain pathway is open/close for transportation.

    Only pathways 0 and 3 are open for transportation. The rest are close.

    */

    bool pathway[8] = {[0]true, [2]true};       //There are only two elements that needs to be initialized, uninitialized elements are automatically set to 0/False value
    


    /*

    Display the status of each pathway.

    Remember  that pathway is type of bool so its elements are either true/false - 1/0.

    */

    for (int i = 0; i < NUM_PATHWAYS; i++){


        if (pathway[i]){
            printf ("pathway[%d] is open \n", i);
        }else{
            printf("pathway[%d] is close \n", i);
        }
    }

    return 0;
}