
#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

// Variables globales
extern char nom_bibliotheque[50];
extern int nb_livres;
extern char livres_initiaux[10][50];

// Prototypes des fonctions - TP1
void afficher_infos(void);
void ajouter_livre(char livres[][50], int *nb_livres);
int rechercher_livre(char livres[][50], int nb_livres, char *titre);
void afficher_menu(char livres[][50], int *nb_livres);

#endif
