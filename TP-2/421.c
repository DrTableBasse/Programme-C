#include "main.h"
void quatredeuxun(){

    // Déclaration des variables
    short dices[3];
    short value_we_need[3] = {1, 2, 4};
    short value_gotten[3] = {-1, -1, -1};
    short index_value_gotten = 0;
    short nb_value_gotten;

    short nb_games;
    short nb_wins = 0, nb_loses = 0;
    short nb_dice = 3;
    int quitter = 1;
    
    printf("Entrez le nombre de parties : ");
    scanf("%hd", &nb_games);


    // Boucle de jeu sur le nombre de parties
    for (short i = 0; i < nb_games; i++){

        // Boucle sur 3 lancer de dés
        for(short r = 0; r < 3; r++){

            // Ajout de la valeur obtenue dans le tableau de dés
            for (short j = 0; j < nb_dice; j++) dices[j] = roll_dice();

            printf("Lancer %d avec %d des : ", r+1, nb_dice);

            // Affichage des valeurs obtenues
            for (short j = 0; j < 3; j++){
                printf("%d ", dices[j]);
            }

            // Si aucun des dés n'a les valeurs recherchée
            if (!in(1, dices, nb_dice) && !in(2, dices, nb_dice) && !in(4, dices, nb_dice)){
                printf("Je ne garde rien ");
                display_gotten_numbers(value_gotten, 3);
            }
            else {
                nb_value_gotten = 0;
                for (short j = 0; j < 3; j++){
                    // Si la valeur recherchée est présente dans le tableau de dés et qu'elle n'a pas déjà été obtenue
                    if (in(value_we_need[j], dices, 3) && !in(value_we_need[j], value_gotten, 3)){
                        value_gotten[index_value_gotten] = value_we_need[j];
                        index_value_gotten++;
                        nb_value_gotten++;
                    }
                }
                if(nb_value_gotten == 0) printf("Je ne garde rien ");

                else{
                    keep(value_gotten, 3);
                    nb_dice -= index_value_gotten;
                }
                
                display_gotten_numbers(value_gotten, 3);
            }

            // Si toute les valeurs recherchées sont présentes dans le tableau des valeurs obtenues
            if (all_in(value_we_need, value_gotten, 3)) {
                printf("Partie %d gagnee en %d coups", i+1, r+1);
                nb_wins++;
                break;
            }
            else if (r == 2){
                printf("Partie %d perdue", i+1);
                nb_loses++;
            } 
        }

        // Réinitialisation des variables
        printf("\n\n\n");
        nb_dice = 3;
        index_value_gotten = 0;
        memset(value_gotten, -1, 3);
    }

    printf("Vous avez joue %d parties, %d gagnees et %d perdue(s) soit %.2f%% de gain\n", nb_games, nb_wins, nb_loses, (float)nb_wins / nb_games * 100);


    printf("Pour revenir au menu 0 sinon taper 1 : ");
    scanf("%i", &quitter);
    if (quitter !=1){
        quitter = 0;
    } 
}