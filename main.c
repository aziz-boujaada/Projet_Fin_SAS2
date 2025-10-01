#include <stdio.h>
#include <stdlib.h>
#include "variables.h"
#include "header.h"

int main()
{
    // Menu Principal
    int menu_choice;
    do
    {
        printf(YELLOW "============================ SYSTEM DE GESTION D'ACHAT CLIEN ==========================\n" RESET);

        printf(YELLOW "________________________________________ MENU ________________________________________\n" RESET);

        printf(BLUE "1-Gestion du profil client\n" RESET);
        printf(BLUE "2-Gestion du solde virtuel\n" RESET);
        printf(BLUE "3-Consultation des produit\n" RESET);
        printf(BLUE "4-Effectuer un achat\n" RESET);
        printf(BLUE "5-Gestion du profil client\n" RESET);
        printf(BLUE "0-Quitter l'application\n" RESET);

        printf(CYAN "Enter Votre Choix : " RESET);
        scanf("%d", &menu_choice);

        switch (menu_choice)
        {
            // sous Menu pour Gestion  de profil
        case 1:
            int profil_choices;
            do
            {
                printf("==================== Gestion de Profil ====================\n");

                printf("1- Craation de profil\n");
                printf("2- Modification du profil \n");
                printf("3- Consultation du profil \n");
                printf("0- Return a la Menu Principal \n");

                printf("enter votre choix : ");
                scanf("%d", &profil_choices);

                switch (profil_choices)
                {
                case 1:
                    Ajouter_Profil(id);
                    break;
                case 2:

                    Modification_Profil(id);
                    break;
                case 3:

                    Afficher_Profile(id);
                    break;

                case 0:
                    break;
                default:
                    printf(RED "Choix invalid !!!!!!" RESET);
                }

            } while (profil_choices > 3);
            break;
            // sous Menu pour Gestion  du Solde Virtuel

        case 2:
            int Sold_choices;
            do
            {
                printf("==================== Gestion de Sold ====================\n");

                printf("1- Consultation du solde \n");
                printf("2- Depot d'argent \n");
                printf("3- Verification de Sold \n");
                printf("0- Return a la Menu Principal \n");

                printf("enter votre choix : ");
                scanf("%d", &Sold_choices);

                switch (Sold_choices)
                {
                case 1:
                    Consultation_Sold(id);
                    break;

                case 2:
                    printf("enter a montant pur ajouter a votre sold :");
                    scanf("%d", &depo_Sold);

                    Depot_Argent(id, depo_Sold);
                    break;

                case 0:
                    break;
                default:
                    printf(RED "Choix invalid !!!!!!" RESET);
                }

            } while (Sold_choices > 3);
            break;

        // sous Menu pour Consultation des produits
        case 3:
            int produits_Choices;

            printf("==================== Catalogue des Produits ====================\n");

            printf("1- Affichage catalogue  \n");
            printf("2- Recherche produits \n");
            printf("3- Tri des produits \n");
            // printf("4- Détails produit  \n");
            // printf("0- Return a la Menu Principal \n");

            printf("enter votre choix : ");
            scanf("%d", &produits_Choices);
            switch (produits_Choices)
            {
            case 1:
                Afficher_Produit();
                break;
            case 2:
                // Recherche produits
                int recherch_choice;

                printf("==================== Rechercher pour Produits ====================\n");

                printf("1- Rechercher par Nom \n");
                printf("2- Recherche Par Categorie \n");
                printf("0- Return a menu principal \n");

                printf("enter Votre choix  :");
                scanf("%d", &recherch_choice);

                switch (recherch_choice)
                {
                case 1:
                    char Search_Nom[100];
                    printf("--------- Rechercher par Nom ----------- \n");
                    printf("enter Nom de Produit pour recherch :");
                    scanf(" %[^\n]", Search_Nom);
                    Recherch_Par_Nom(Search_Nom);
                    break;
                case 2:
                    char Search_categorie[100];
                    printf("--------- Rechercher par Categorie ----------- \n");
                    printf("enter Categories de Produit pour recherch :");
                    scanf(" %[^\n]", Search_categorie);
                    Recherch_Par_Categoire(Search_categorie);
                    break;
                }

                break;
            case 3:
                // RTri des produits
                int Tri_choice;

                printf("==================== Trier les Produit ====================\n");

                printf("1- trier par prix \n");
                printf("2- trier par Nom \n");
                printf("0- Return a menu principal \n");

                printf("enter Votre choix  :");
                scanf("%d", &Tri_choice);

                switch(Tri_choice)
                {
                    case 1 : 
                    Tri_Par_Prix();
                    Afficher_Produit();
                    break;

                    case 2 : 
                    Tri_Par_Nom();
                    Afficher_Produit();
                    break;
                }
                break;
            case 4:
                // Détails produi
                break;
            }

            break;
        }
    } while (menu_choice != 0);

    return 0;
}