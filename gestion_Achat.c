#include <stdio.h>
#include <string.h>
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

int Achat_proccecur(){
    int trouver = 0 ;
    printf("---------------------------- Achat Processus --------------------\n");
    
    for(int i = 0 ; i < List_Prouits_size ; i++){
           if (Product[i].Product_ID == Select_Id){
            
           }
    }
}
