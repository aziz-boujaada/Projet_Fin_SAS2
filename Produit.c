#include <stdio.h>
#include <string.h>
#include "variables.h"
#include "header.h"

int Afficher_Produit(int id)
{
    printf(YELLOW "-------------- List Des Produit ----------------\n"RESET);
    for(int i = 0 ; i < List_Prouits_size ; i++ ){
        printf("Nom du Produit : %s\n" , Product[i].Product_Name);
        printf("Prix du Produit : %.2f\n " , Product[i].Product_Prix);
        printf("Stock du Produit : %d\n" , Product[i].Product_Stock);
        printf("____________________________________________________\n");
    }
}


