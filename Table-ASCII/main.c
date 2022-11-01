/*****************************************************
* \author  Nuez Samuel
* \date    26 octobre 2022
* \version 1.0
******************************************************/
#include <stdio.h>

void main(){ //prototype

    int variable = 33;

    while(variable <= 127 )
    {
        if (variable % 10 == 0){
        
            printf("\n");
        }
        printf("[%d, %c] ", variable,variable);
        variable++;
    }
    printf("\n");
    printf("\033[0;33mle canard c'est bon\n");






}
