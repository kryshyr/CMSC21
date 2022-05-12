/******************************
 *  SALURIA, PRECIOUS KAIRA   *
 * LECTURE 6-7 ASSIGNMENT #1B *
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

    bool pathway[8] = {true, false, true};      //The remaining array elements will be automatically initialized to zero.

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