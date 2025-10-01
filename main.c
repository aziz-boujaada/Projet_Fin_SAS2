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
        printf(BLUE "5Gestion du profil client\n" RESET);
        printf(BLUE "0-Quitter l'application\n" RESET);

        printf(CYAN "Enter Votre Choix : " RESET);
        scanf("%d", &menu_choice);

        switch (menu_choice)
        {
        case 1:
            Gestion_Profil_Menu();
            break;

        case 2:
            Gestion_Sold();
            break;
        }
    } while (menu_choice != 0);

    return 0;
}