#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double* a_tab;
    unsigned int a_taille;
} TableauDouble;

typedef TableauDouble* PtrTableauDouble;

void TableauDouble_construire(PtrTableauDouble dd, unsigned taille) {
    dd->a_taille = taille;
    dd->a_tab = malloc(taille * sizeof(double));

    if (dd->a_tab == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire\n");
        exit(EXIT_FAILURE);
    }
}

void TableauDouble_afficher(const PtrTableauDouble dd) {
    for (unsigned i = 0; i < dd->a_taille; i++) {
        printf("%5.10f ", dd->a_tab[i]);
    }
    printf("\n");
}

void TableauDouble_modifier(PtrTableauDouble const dd, const unsigned index, const double valeur) {
    dd->a_tab[index] = valeur;
}

void TableauDouble_liberer(PtrTableauDouble dd) {
    free(dd->a_tab);
    dd->a_tab = NULL;
    dd->a_taille = 0;
}

double TableauDouble_get(PtrTableauDouble dd, const unsigned index) {
    return dd->a_tab[index];
}

void TableauDouble_set(PtrTableauDouble dd, const unsigned index, double val) {
    dd->a_tab[index] = val;
}

int main() {
    PtrTableauDouble d1 = malloc(sizeof(TableauDouble));
    unsigned t1=5;
    TableauDouble_construire(d1,t1);
    TableauDouble_afficher(d1);
    TableauDouble_modifier(d1,2, 3.13589985);
    TableauDouble_afficher(d1);
    printf("%5.10f\n",TableauDouble_get(d1,2));
    TableauDouble_set(d1,2,62.1);
    printf("%5.10f\n",TableauDouble_get(d1,2));
    TableauDouble_afficher(d1);
    TableauDouble_liberer(d1);

    return 0;
}


void incr(int *x) {
   *x = *x + 1;
}

int main() {
   int a = 10;
   incr(&a);
   printf("La valeur de a est maintenant : %d\n", a);
   return 0;
}