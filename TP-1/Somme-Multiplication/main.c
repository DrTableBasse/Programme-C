/*****************************************************
* \author  Nuez Samuel
* \date    26 octobre 2022
* \version 1.0
******************************************************/
#include <stdio.h>

int main(){

int somme_depart = 0;
int somme = 0;
int factoriel = 1;
int i =1;

printf("Choisir une valeur pour faire la somme et le factoriel : ");
scanf("%i", &somme_depart);

while ( i < somme_depart+1){

    somme = somme + i;
    factoriel = factoriel * i;
    i++;

}

printf("La somme de ces entiers est : %d\n", somme);
printf("Le factoriel de cet entiers est : %d\n", factoriel);

}