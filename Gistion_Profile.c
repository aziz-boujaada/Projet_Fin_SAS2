#include <stdio.h>
#include "variables.h"
#include "header.h"

int id = 0;
void Gestion_Profil_Menu()
{
    int profil_choices;
    do
    {
        printf("==================== Gestion de Profil ====================\n");

        printf("1- Craation de profil\n");
        printf("2- Modification du profil \n");
        printf("3- Consultation du profil \n");

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
        }

    } while (profil_choices != 0);
}