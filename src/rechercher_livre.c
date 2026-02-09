/**
 * Exercice 3 - Rechercher un livre
 */
#include <string.h>
#include "../inc/bibliotheque.h"

int rechercher_livre(char livres[][50], int nb_livres, char *titre) {
    for (int i = 0; i < nb_livres; i++) {
        if (strcmp(livres[i], titre) == 0) {
            return i;
        }
    }
    return -1;
}
