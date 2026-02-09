/**
 * Programme principal
 */
#include <stdio.h>
#include <string.h>
#include "../inc/bibliotheque.h"

int main(void) {
    int choix;
    char livres[10][50];
    char titre_recherche[50];
    int index;
    
    for (int i = 0; i < nb_livres; i++) {
        strcpy(livres[i], livres_initiaux[i]);
    }
    
    printf("\n*** SYSTEME DE GESTION DE BIBLIOTHEQUE - TP1 ***\n");
    
    do {
        afficher_menu();
        scanf("%d", &choix);
        getchar();
        
        switch (choix) {
            case 1:
                afficher_infos();
                break;
            case 2:
                ajouter_livre(livres, &nb_livres);
                break;
            case 3:
                if (nb_livres == 0) {
                    printf("\nAucun livre dans la bibliotheque.\n");
                } else {
                    printf("\nEntrez le titre a rechercher : ");
                    fgets(titre_recherche, 50, stdin);
                    titre_recherche[strcspn(titre_recherche, "\n")] = '\0';
                    
                    index = rechercher_livre(livres, nb_livres, titre_recherche);
                    if (index != -1) {
                        printf("\nLivre trouve a l'index %d : %s\n", index, livres[index]);
                    } else {
                        printf("\nLivre non trouve.\n");
                    }
                }
                break;
            case 4:
                printf("\nAu revoir !\n\n");
                break;
            default:
                printf("\nChoix invalide. Veuillez reessayer.\n");
        }
    } while (choix != 4);
    
    return 0;
}
