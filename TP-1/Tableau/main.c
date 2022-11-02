/*****************************************************
* \author  Nuez Samuel
* \date    26 octobre 2022
* \version 1.0
******************************************************/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void main(){

    //création d'un tableau 
    int tableau[10][10];
    float moyenneColonne;
    float moyenneligne;
    int sommetotale;
    float sommecolonne;
    float sommeligne;
    float moyennecolonne;
    
    //création d'entiers pour déterminer la taille du tableau ainsi quel es éléments qui seront présents

    int i, j, ligne, colonne;

    printf(" Entrez le nombre de lignes (max 10): ");
    scanf("%d",&ligne);
    printf(" Entrez le nombre de colonne (max 10): ");
    scanf("%d",&colonne);
    printf(" Entrez les %d éléments de tableau : ",ligne*colonne);

    //on prend toutes les valeurs du tableaux
    for (i = 0; i < ligne; i++){

        for (j = 0; j < colonne; j++){
            
            scanf("%i",&tableau[i][j]);   
        }
    }

    //on va passer le tableau colonne par colonne 

    printf("\n Voici le tableau : \n");

      for(i=0; i < ligne; i++){
        sommecolonne = 0;
        
        for(j = 0; j < colonne; j++){

            printf("%i\t",tableau[i][j]); 
            sommecolonne += tableau[i][j]; //on ajoute à sommej les valeurs dans le tableau colonne par colonne.
            
        }

        moyennecolonne= sommecolonne/colonne; //on calcule la moyenne 
         
        printf("(%.2f)\n",moyennecolonne);
        
        
        printf("\n");
        }
      
      for(j=0; j < colonne; j++){
        sommeligne = 0;
    
        //moyenne = 0;
        for(i = 0; i < ligne; i++){


            sommeligne += tableau[i][j];
            sommetotale += tableau[i][j];
        }
        moyenneligne= sommeligne/ligne;
        
        printf("(%.2f)\t",moyenneligne);

        // printf("\n");
        }
        
        

        printf("(%i)\n",sommetotale/ligne);


}