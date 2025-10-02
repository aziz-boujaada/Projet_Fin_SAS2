#include <stdio.h>
#include <string.h>
#include<stdbool.h>
#include "variables.h"
#include "header.h"

int Selection_Produit(int Select_Id)
{

    int trouver = 0;
    printf("---------------------------- select prouduit --------------------\n");
    for (int i = 0; i < List_Prouits_size; i++)
    {
        if (Product[i].Product_ID == Select_Id)
        {
            trouver = 1;
            printf("---------------- Produit Trouver ----------------------\n");
            printf("Produit ID : %d\n", Product[i].Product_ID);
            printf("Produit Nom : %s\n", Product[i].Product_Name);
            printf("Produit Categorie: %s\n", Product[i].Categorie.Categorie_Nom);
            printf("Produit Prix : %.2f\n", Product[i].Product_Prix);
            printf("Produit Stock : %d\n", Product[i].Product_Stock);
            printf("Produit Description : %s\n", Product[i].Product_Description);
            printf("________________________________________________________________________\n");
            break;
        }
    }
}

int Achat_proccecur(int Select_Id , int Quantite){
    bool trouver = false;
    printf("---------------------------- Achat Processus --------------------\n");
    
    for(int i = 0 ; i < List_Prouits_size ; i++){
           if (Product[i].Product_ID == Select_Id){
             trouver = true ; 
             if(Quantite < Product[i].Product_Stock ){
                if(client[id].Sold >= Product[i].Product_Prix){
                    client[id].Sold -= Product[i].Product_Prix * Quantite;
                    Product[i].Product_Stock-=Quantite;
                    Product[i].nbr_achat =+ Quantite ;
                    printf(GREEN" le  stock product %s est %d \n"RESET , Product[i].Product_Name , Product[i].Product_Stock);
                    printf(GREEN"Votre solde Aprer achete le product %s est  %.2f \n"RESET , Product[i].Product_Name , client[id].Sold);
                    printf("nombre d acaht  %d \n", Product[i].nbr_achat);
                }else{
                    printf(RED"recharger votre sold d abord !!!!"RESET);
                }
             }else{
                printf(RED"pas proufuit dans le stock" RESET);
             }
           }

        }
    if(!trouver){
        printf(RED"pas d produit avec cet ID\n"RESET);
    }
}

void statistiques()
{
    if (client[0].Sold == 0)
    {
        printf("==== statistiques ====\n");
        printf("vous n'avez pas encore effectue d'achat.\n");
    }
    else
    {
        printf("==== statistiques ====\n");
        float total = 0.0;
        for (int i = 0; i < List_Prouits_size; i++)
        {
            if (Product[i].nbr_achat > 0)
            {
                 printf("================== produit statistics =======================\n");
                 printf("produit Nom :%s\n" , Product[i].Product_Name);
                 printf("produit nombre acaht :%d\n" , Product[i].nbr_achat);
                 printf("produit prix  :%.2f\n" , Product[i].Product_Prix);
                
                 
                total_invissment += Product[i].Product_Prix * Product[i].nbr_achat;
                printf("--------------------------------------------------\n");
            }
        }
        printf("total depense : %.2f \n", total_invissment);
    }
}