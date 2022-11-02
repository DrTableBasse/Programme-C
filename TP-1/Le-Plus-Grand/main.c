/*****************************************************
* \author  Nuez Samuel
* \date    26 octobre 2022
* \version 1.0
******************************************************/
#include <stdio.h>

int main(){

int tableau[20];
int i = 0;
int nombre_choisit;
int plus_grand = 0;
int position =0;

while (i < 20){

    scanf("%i", &nombre_choisit);
    tableau[i] = nombre_choisit;

    printf("tab[%u] = %d\n", i , tableau[i] );
    


    if (tableau[i]> plus_grand){   //On cherche à savoir si le nombre rentré précédemment est plus grand ou plus petit 
        plus_grand = tableau[i];  // que celui rentré par l'utilisateur
        position = i;
        printf("\nLe chiffre est plus grand que le précédent\n");

    }
    i++;
}

printf("-----------------------\n");
printf("Le chiffre le plus grand de la liste est : %d\n", plus_grand);
printf("Il se trouve en position : %d ", position);

}