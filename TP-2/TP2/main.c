#include <stdio.h>

#include "main.h"



int main(void)
{
    int choix;
    // Déclarez une variable booléenne pour indiquer si l'utilisateur souhaite quitter le programme ou non
    int quitter = 0;

    // Utilisez une boucle do-while pour afficher le menu à l'écran et demander à l'utilisateur de saisir son choix
    do
    {
        printf("Menu :\n");
        printf("1. Equation du 2nd degrés \n");
        printf("2. Suite R(n)\n");
        printf("3. Fibonacci\n");
        printf("4. Nombre d'or et Fibonacci\n");
        printf("5. 421\n");

        printf("Votre choix : ");
        scanf("%d", &choix);

        // Utilisez une instruction switch pour exécuter le code correspondant à l'option choisie
        switch (choix)
        {
            case 1:
                // Inclure le fichier option1.c dans votre programme
                equation_2nd_degres();
                break;
            case 2:
                // Inclure le fichier option2.c dans votre programme
                suiteRn();
                break;
            case 3:
                // Inclure le fichier option2.c dans votre programme
                fibonacci();
                break;
            case 4:
                // Inclure le fichier option2.c dans votre programme
                goldFibo();
                break;
            
            case 5:
                // Inclure le fichier option2.c dans votre programme
                quatredeuxun();
                break;


            case 6:
                // Mettez la variable quitter à 1 pour indiquer que l'utilisateur souhaite quitter le programme
                quitter = 1;
                break;
            default:
                printf("Choix non valide\n");
                break;
        }
    }
    // Utilisez la variable quitter dans la condition de la boucle pour savoir quand arrêter de boucler
    while (!quitter);

    return 0;
}
