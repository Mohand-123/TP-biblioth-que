/**
 * Exercice 4 - Menu principal
 */
#include <stdio.h>
#include <string.h>
#include "../inc/bibliotheque.h"

void afficher_menu(char livres[][50], int *nb_livres) {
    int choix;
    char titre_recherche[50];
    int index;
    
    while (1) {
        printf("\n========== MENU PRINCIPAL ==========\n");
        printf("1. Afficher les informations\n");
        printf("2. Ajouter un livre\n");
        printf("3. Rechercher un livre\n");
        printf("4. Quitter\n");
        printf("====================================\n");
        printf("Votre choix : ");
        
        scanf("%d", &choix);
        getchar();
        
        switch (choix) {
            case 1:
                afficher_infos();
                break;
            case 2:
                ajouter_livre(livres, nb_livres);
                break;
            case 3:
                if (*nb_livres == 0) {
                    printf("\nAucun livre dans la bibliotheque.\n");
                } else {
                    printf("\nEntrez le titre a rechercher : ");
                    fgets(titre_recherche, 50, stdin);
                    titre_recherche[strcspn(titre_recherche, "\n")] = '\0';
                    
                    index = rechercher_livre(livres, *nb_livres, titre_recherche);
                    if (index != -1) {
                        printf("\nLivre trouve a l'index %d : %s\n", index, livres[index]);
                    } else {
                        printf("\nLivre non trouve.\n");
                    }
                }
                break;
            case 4:
                printf("\nAu revoir !\n");
                break;
            default:
                printf("\nChoix invalide. Veuillez reessayer.\n");
        }
    }
}
