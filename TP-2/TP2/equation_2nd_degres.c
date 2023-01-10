#include "main.h"

// Déclarez la fonction pour exécuter l'exercice 1
float equation_2nd_degres(void)
{
    // Code pour exécuter l'exercice 1

    double a,b,c,delta,solution1,solution2=0;
    int quitter = 1;

    while (quitter){
        printf("Veuillez choisir la valeur de A : ");
        scanf("%le", &a);

        printf("Veuillez choisir la valeur de B : ");
        scanf("%le", &b);
        
        printf("Veuillez choisir la valeur de C : ");
        scanf("%le", &c);

        delta=b*b-4*a*c;
        printf("Votre Delta est de la forme Δ = b²-4ac et est égal à : %.2f\n", delta);
        
        //Diviser par 0, vraiment ? 
        if (a != 0){
            //Si Delta est > à 0 on calcule les deux solutions dans R
            if (delta > 0){
                solution1 = (-b + sqrt(delta)) / 2*a;
                solution2 = (-b - sqrt(delta)) / 2*a;
                printf("Il existe deux solutions dans le Réel pour votre équation du second degré qui sont : %.2f,  %.2f\n", solution1, solution2);

            //Une seule solution si Delta est = à 0
            }else if (delta == 0){

                solution1 = -b / (2*a);
                printf("Il existe une solutions dans le Réel pour votre équation du second degré qui sont : %.2f\n", solution1);
            
            //Deux solutions dans les Imaginaires si Delta < 0
            }else if (delta<0){

                //csqrt permet de faire les racines carrés dans les complexes sinon NaN
                double complex solution1 = (-b + csqrt(delta)) / 2*a;
                double complex solution2 = (-b - csqrt(delta)) / 2*a;
                printf("x1 = %.2f + %.2fi\n", creal(solution1), cimag(solution1));
                printf("x2 = %.2f + %.2fi\n", creal(solution2), cimag(solution2));

            }

        }
        //Diviser par 0, sérieusement ?
        else{
            printf("ouvre ce lien :  https://www.youtube.com/watch?v=YBc4y1jqFi0 ");
        }
    
    //Menu pour revenir au menu principal OU relancer la fonction equation_2nd_degres()
    printf("Pour revenir au menu 0 sinon taper 1 : ");
    scanf("%i", &quitter);
    if (quitter !=1){
        quitter = 0;
    }       

}}