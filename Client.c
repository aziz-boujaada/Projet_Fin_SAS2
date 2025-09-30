#include <stdio.h>
#include<string.h>
#include "variables.h"
#include "header.h"



int Generate_Email(int id){
    strcpy(client[id].Email , client[id].Nom);
    strcat(client[id].Email , ".");
    strcat(client[id].Email , client[id].Prenom);
    strcat(client[id].Email , "@gmail.com");
}
int Ajouter_Profil(int id){

    printf("------------------- Ajouter ----------------------\n");
    
    client[id].Client_Id = id+1 ;
    printf("Enter Votre Nom : ");

    scanf("%s" , client[id].Nom);
    printf("Enter Votre Prenom : ");
    scanf("%s" , client[id].Prenom);
    
     Generate_Email(id);

   
    client[id].Sold = 500 ;
    printf(GREEN "Le profil a ete ajoute avec succes \n" RESET);
    printf("--------------------------------------------------\n");

}

int Modification_Profil(int id){

     printf("------------------- Midifeier ----------------------\n");
    
    printf("enter nue nouvelle nom (Acctuell %s) :"  , client[id].Nom);
    scanf(" %[^\n]" , client[id].Nom);

    printf("enter nue nouvelle nom (Acctuell %s) :"  , client[id].Prenom);
    scanf(" %[^\n]" , client[id].Prenom);

    Generate_Email(id);
    
}


int Afficher_Profile(int id){
    printf("------------------- Your Informations ----------------------\n");
    printf("Id: %d\n" , client[id].Client_Id );
    printf("Id: %s\n" , client[id].Nom );
    printf("Id: %s\n" , client[id].Prenom );
    printf("Id: %s\n" , client[id].Email );
    printf("Id: %d\n" , client[id].Sold);
}