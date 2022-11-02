/*****************************************************
* \author  Nuez Samuel
* \date    26 octobre 2022
* \version 1.0
******************************************************/
#include <stdlib.h>
#include <stdio.h>

void afficheTriangleSapin(const unsigned int n, char c)
{
    int i, e, l; //i = nombre de ligne   l = afficher les étoiles e = nombre d'espaces!
    for (i = 0; i < n; i++) // permet de faire l'arbre
    {
        for (e = (n - i) - 1; e > 0; e--) // fait les espaces des étoiles
            printf(" ");
        for (l = (i * 2) + 1; l > 0; l--) // afficher les étoiles

            printf("*");
        printf("\n");
    }
    for (int tl = 0; tl < (n * 2 - 1) / 5; tl++)
    {

        for (int ts = 0; ts < ((n * 2 - 1) - 3) / 2; ts++) // fait les espaces des étoiles
            printf(" ");

        for (int te = 0; te < (((n * 2 - 1) - 3) / 2); te++) // afficher les étoiles
            printf("*");
        printf("\n");
    }
    printf("*************************Joyeux Noêl***********************\n");
}

void main()
{

    int taille = 0;
    char charac = ' ';

    scanf("%d", &taille);
    scanf("%c", &charac);

    afficheTriangleSapin(taille, charac);
}