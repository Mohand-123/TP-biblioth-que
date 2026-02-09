#include <stdio.h>
#include <string.h>
#include "../inc/bibliotheque.h"

// Définition des variables globales
char nom_bibliotheque[50] = "Bibliotheque Centrale";
int nb_livres = 10;
char livres_initiaux[10][50] = {
    "Le Petit Prince",
    "1984",
    "Les Miserables",
    "Harry Potter",
    "Le Seigneur des Anneaux",
    "Germinal",
    "L'Etranger",
    "Madame Bovary",
    "Notre-Dame de Paris",
    "Don Quichotte"
};

// Exercice 1 - Affichage d'informations
void afficher_infos(void) {
    printf("\n=== INFORMATIONS BIBLIOTHEQUE ===\n");
    printf("Nom de la bibliotheque : %s\n", nom_bibliotheque);
    printf("Nombre de livres : %d\n", nb_livres);
    printf("=================================\n\n");
}

// Exercice 2 - Ajouter un livre (version tableau statique)
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

// Exercice 3 - Rechercher un livre
int rechercher_livre(char livres[][50], int nb_livres, char *titre) {
    for (int i = 0; i < nb_livres; i++) {
        if (strcmp(livres[i], titre) == 0) {
            return i;
        }
    }
    return -1;
}
