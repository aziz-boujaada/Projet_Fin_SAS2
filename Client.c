#include<stdio.h>
#include "structure_definition.c"
#include "variables.h"




void Ajouter_Profil(){
int id =0 ;
    printf("------------------- Ajouter ----------------------\n");
    printf("Enter Votre ID : ");
    scanf("%d" , &id);
    client[id].Client_Id = id+1 ;
    printf("Enter Votre Nom : ");

    scanf("%s" , client[id].Nom);
    printf("Enter Votre Prenom : ");
    scanf("%s" , client[id].Prenom);
    printf("Enter Votre Email : ");
    scanf("%s" , client[id].Email);
    client[id].Sold = 500 ;
    printf(GREEN "Le profil a ete ajoute avec succes \n" RESET);
    printf("--------------------------------------------------\n");

   

}