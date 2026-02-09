#include <stdio.h>
#include <string.h>
#include "../inc/bibliotheque.h"

// Exercice 4 - Menu principal
void afficher_menu(void) {
    printf("\n========== MENU PRINCIPAL ==========\n");
    printf("1. Afficher les informations\n");
    printf("2. Ajouter un livre\n");
    printf("3. Rechercher un livre\n");
    printf("4. Quitter\n");
    printf("====================================\n");
    printf("Votre choix : ");
}

int main(void) {
    int choix;
    char livres[10][50];  // Tableau statique de 10 livres max
    char titre_recherche[50];
    int index;
    
    // Initialiser avec les livres par défaut
    for (int i = 0; i < nb_livres; i++) {
        strcpy(livres[i], livres_initiaux[i]);
    }
    
    printf("\n*** SYSTEME DE GESTION DE BIBLIOTHEQUE - TP1 ***\n");
    
    do {
        afficher_menu();
        scanf("%d", &choix);
        getchar(); // Pour consommer le \n restant
        
        switch (choix) {
            case 1:
                // Afficher les informations
                afficher_infos();
                break;
                
            case 2:
                // Ajouter un livre
                ajouter_livre(livres, &nb_livres);
                break;
                
            case 3:
                // Rechercher un livre
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
                // Quitter
                printf("\nAu revoir !\n\n");
                break;
                
            default:
                printf("\nChoix invalide. Veuillez reessayer.\n");
        }
        
    } while (choix != 4);
    
    return 0;
}
