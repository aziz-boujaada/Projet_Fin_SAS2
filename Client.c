#include <stdio.h>
#include <string.h>
#include "variables.h"
#include "header.h"

// gestion de profile
int Generate_Email(int id)
{
    strcpy(client[id].Email, client[id].Nom);
    strcat(client[id].Email, ".");
    strcat(client[id].Email, client[id].Prenom);
    strcat(client[id].Email, "@gmail.com");
}

// check if client creat profil
int Check_Profile_Exist()
{
    if (Is_Profile_exsit == 0)
    {
        printf(RED "creer un profile d abord !!\n" RESET);
        return 0;
    }
    return 1;
}
int Ajouter_Profil(int id)
{
    if (Is_Profile_exsit == 1)
    {
        printf(RED "tu es Deja creer un profile\n" RESET);
        return 0;
    }
    printf("------------------- Ajouter ----------------------\n");

    client[id].Client_Id = id + 1;
    printf("Enter Votre Nom : ");

    scanf("%s", client[id].Nom);
    printf("Enter Votre Prenom : ");
    scanf("%s", client[id].Prenom);

    Generate_Email(id);

    client[id].Sold = 500;
    printf(GREEN "Le profil a ete ajoute avec succes \n" RESET);

    Is_Profile_exsit = 1;
    printf("--------------------------------------------------\n");
}

int Modification_Profil(int id)
{

   if(!Check_Profile_Exist())
    printf("------------------- Midifeier ----------------------\n");

    printf("enter nue nouvelle nom (Acctuell %s) :", client[id].Nom);
    scanf(" %[^\n]", client[id].Nom);

    printf("enter nue nouvelle nom (Acctuell %s) :", client[id].Prenom);
    scanf(" %[^\n]", client[id].Prenom);

    Generate_Email(id);
}

int Afficher_Profile(int id)
{
    if(!Check_Profile_Exist())
    printf("------------------- Your Informations ----------------------\n");
    printf("Id: %d\n", client[id].Client_Id);
    printf("Nom: %s\n", client[id].Nom);
    printf("Prenom: %s\n", client[id].Prenom);
    printf("Email: %s\n", client[id].Email);
    printf("Sold: %.2f\n", client[id].Sold);
}

// gestion de sold

int Consultation_Sold(int id)
{
    if(!Check_Profile_Exist())

    printf("-------------------------- Consultation_Sold ----------------------\n");

    if (client[id].Sold > 0)
    {
        printf(GREEN "Votre solde est : %.2f\n" RESET, client[id].Sold);
    }
    else
    {
        printf(RED "votre sold epuise\n" RESET);
    }
}

int Depot_Argent(int id, int depo_Sold)
{
    if(!Check_Profile_Exist())
    printf("-------------------------- Depot_Sold ----------------------\n");

    client[id].Sold += depo_Sold;

    printf(GREEN "Votre solde aprer depot est : %.2f\n" RESET, client[id].Sold);
}