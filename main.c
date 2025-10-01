#include <stdio.h>
#include <stdlib.h>
#include "variables.h"
#include "header.h"

int main()
{
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

                    Depot_Argent(id ,depo_Sold );
                    break;
                case 3:

                    // Verification de Sold
                    break;

                case 0:
                    break;
                default:
                    printf(RED "Choix invalid !!!!!!" RESET);
                }

            } while (Sold_choices > 3);
            break;
        }
    } while (menu_choice != 0);

    return 0;
}