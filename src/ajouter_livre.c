/**
 * Exercice 2 - Ajouter un livre
 */
#include <stdio.h>
#include <string.h>
#include "../inc/bibliotheque.h"

void ajouter_livre(char livres[][50], int *nb_livres) {
    if (*nb_livres >= 10) {
        printf("Erreur : La bibliotheque est pleine (max 10 livres).\n");
        return;
    }
    
    printf("Entrez le titre du livre : ");
    fgets(livres[*nb_livres], 50, stdin);
    livres[*nb_livres][strcspn(livres[*nb_livres], "\n")] = '\0';
    
    (*nb_livres)++;
    printf("Livre ajoute avec succes !\n");
}
