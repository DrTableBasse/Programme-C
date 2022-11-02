/*****************************************************
* \author  Nuez Samuel
* \date    26 octobre 2022
* \version 1.0
******************************************************/
#include <stdio.h>

void main(){

float Un =0;
float n = 0;
float resultat = 1;
printf("%f   %f   %f\n ",Un, n, resultat );
printf("---------------------------------------------------------\n");
while (1 > -1){
    printf("Choisir le nombre de terme de la suite à calculer n avec n > 0 (0 pour terminer) : \n");
    scanf("%f", &n);




   
    if (n == 0 || n < 0) {
        printf("Sortie du programme\n");
        return;
    }

    Un = Un-1+(1/n);
    printf("%f\n", Un);
    resultat += resultat + Un;
    printf("%f\n", resultat);
}



}
