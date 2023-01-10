#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[256];
    char auteur[256];
    char maison_edition[256];
    char code_barre[256];
} Livre;

void Livre_creer(Livre* livre, const char* nom, const char* auteur, const char* maison_edition, const char* code_barre) {
    strcpy(livre->nom, nom);
    strcpy(livre->auteur, auteur);
    strcpy(livre->maison_edition, maison_edition);
    strcpy(livre->code_barre, code_barre);
}

void Livre_modifier_nom(Livre* livre, const char* nom) {
    strcpy(livre->nom, nom);
}

void Livre_modifier_auteur(Livre* livre, const char* auteur) {
    strcpy(livre->auteur, auteur);
}

void Livre_modifier_maison_edition(Livre* livre, const char* maison_edition) {
    strcpy(livre->maison_edition, maison_edition);
}

void Livre_modifier_code_barre(Livre* livre, const char* code_barre) {
    strcpy(livre->code_barre, code_barre);
}

const char* Livre_selectionner_nom(Livre* livre) {
    return livre->nom;
}

const char* Livre_selectionner_auteur(Livre* livre) {
    return livre->auteur;
}

const char* Livre_selectionner_maison_edition(Livre* livre) {
    return livre->maison_edition;
}

const char* Livre_selectionner_code_barre(Livre* livre) {
    return livre->code_barre;
}

void Livre_afficher(Livre* livre) {
    printf("Nom : %s\n", livre->nom);
    printf("Auteur : %s\n", livre->auteur);
    printf("Maison d'édition : %s\n", livre->maison_edition);
    printf("Code barre : %s\n", livre->code_barre);
}

int main() {
    Livre livre;
    Livre_creer(&livre, "Le Seigneur des Anneaux", "J.R.R. Tolkien", "Houghton Mifflin", "1234567890");
    Livre_afficher(&livre);

    Livre_modifier_nom(&livre, "Le Hobbit");
    Livre_afficher(&livre);

    Livre_modifier_auteur(&livre, "J.R.R. Tolkien");
    Livre_afficher(&livre);

    Livre_modifier_maison_edition(&livre, "George Allen & Unwin");
    Livre_afficher(&livre);

    Livre_modifier_code_barre(&livre, "9876543210");
    Livre_afficher(&livre);

    printf("Nom : %s\n", Livre_selectionner_nom(&livre));
    printf("Auteur : %s\n", Livre_selectionner_auteur(&livre));
    printf("Maison d'édition : %s\n", Livre_selectionner_maison_edition(&livre));
    printf("Code barre : %s\n", Livre_selectionner_code_barre(&livre));

    return 0;
}

