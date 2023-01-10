#include "main.h"

// Déclarez la fonction pour exécuter l'option 1
float suiteRn(void){

    int quitter = 1;

    float index = 2;
    int i,n=0;
    printf("A quelle valeur de n voulez-vous aller ? :\n");
    scanf("%i", &n);
    printf("------------------------");
    for (i=0; i<=n; i++){
        index = 0.5*(index + (2/index));
        printf("Pour n =  %i, Rn = %.2f\n",n, index);

    }

    //Menu pour revenir au menu principal OU relancer la fonction equation_2nd_degres()
    printf("Pour revenir au menu 0 sinon taper 1 : ");
    scanf("%i", &quitter);
    if (quitter !=1){
        quitter = 0;
    }       


}