/**
 * Exercice 1 - Affichage d'informations
 */
#include <stdio.h>
#include "../inc/bibliotheque.h"

void afficher_infos(void) {
    printf("\n=== INFORMATIONS BIBLIOTHEQUE ===\n");
    printf("Nom de la bibliotheque : %s\n", nom_bibliotheque);
    printf("Nombre de livres : %d\n", nb_livres);
    printf("=================================\n\n");
}
