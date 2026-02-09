#include <stdio.h>
#include <string.h>
#include "../inc/bibliotheque.h"

int main(void) {
    char livres[10][50];
    for (int i = 0; i < nb_livres; i++) strcpy(livres[i], livres_initiaux[i]);
    printf("\n*** SYSTEME DE GESTION DE BIBLIOTHEQUE - TP1 ***\n");
    afficher_menu(livres, &nb_livres);
    return 0;
}
