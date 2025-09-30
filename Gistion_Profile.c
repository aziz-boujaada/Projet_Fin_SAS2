#include<stdio.h>
#include "structure_definition.c"
#include "variables.h"
#include "client.c"

void Gestion_Profil_Menu()
{
    int profil_choices;
    do{
        printf("==================== Gestion de Profil ====================\n");
          
        printf("1- Craation de profil\n");
        printf("2- Modification du profil \n");
        printf("3- Consultation du profil \n");
    
        printf("enter votre choix : " );
        scanf("%d" , &profil_choices);
    
    
       switch(profil_choices)
       {
        case 1 :
        Ajouter_Profil();// add function of ajout profile 
        break;
        case 2 :
        // Modification du profil 
        break;
        case 3 :
        // Consultation du profil
        break;
       }

    }while(profil_choices != 0);


}