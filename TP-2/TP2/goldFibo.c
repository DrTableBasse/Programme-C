#include "main.h"

int goldFibo(){


    int n;
    unsigned long valeur;
    int quitter = 1;
    double suiteOn;
    float or;
    
    
    printf("Veuillez choisir une valeur n pour la suite de Fibonacci : ");
    scanf("%d", &n);


    //O(n) = F(n+1)/F(n) avec F(n) qui représentante la valeur de Fibonacci à l’ordre n
    valeur = calculfibo(n+1) / calculfibo(n);
    or = (1+sqrt(5)/2);

    printf("Suite O(n) où n = %d %lu\n",n,valeur);
    printf("La valeur du nombre d'or est : %f\n ",or );



    //Menu pour revenir au menu principal OU relancer la fonction equation_2nd_degres()
    printf("Pour revenir au menu 0 sinon taper 1 : ");
    scanf("%i", &quitter);
    if (quitter !=1){
        quitter = 0;
    } 

 }