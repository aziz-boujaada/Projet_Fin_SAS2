#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "variables.h"
#include "header.h"
void Tri_Par_Nom();

// void Sub_String(int id){
// while(client[id].Nom != '\0'){

//}
//}

void Afficher_Produit()
{
  printf(YELLOW "-------------- List Des Produit ----------------\n" RESET);
  for (int i = 0; i < List_Prouits_size; i++)
  {
    printf("Nom du Produit : %s\n", Product[i].Product_Name);
    printf("Prix du Produit : %.2f\n ", Product[i].Product_Prix);
    printf("Stock du Produit : %d\n", Product[i].Product_Stock);
    printf("____________________________________________________\n");
  }
}

void Tri_Par_Prix()
{

  for (int i = 0; i < List_Prouits_size; i++)
  {
    for (int j = 0; j < List_Prouits_size - i; j++)
    {

      if (Product[j].Product_Prix > Product[j + 1].Product_Prix)
      {
        Product_Struct temp = Product[j];
        Product[j] = Product[j + 1];
        Product[j + 1] = temp;
      }
    }
  }
}
void Tri_Par_Nom()
{

  for (int i = 0; i < List_Prouits_size; i++)
  {
    for (int j = 0; j < List_Prouits_size - i; j++)
    {

      if (strcasecmp(Product[j].Product_Name, Product[j + 1].Product_Name) > 0)
      {
        Product_Struct temp = Product[j];
        Product[j] = Product[j + 1];
        Product[j + 1] = temp;
      }
    }
  }
}

void Recherch_Par_Nom(char Search_Nom[100])
{

 Tri_Par_Nom();

  int start = 0, end = List_Prouits_size - 1, mill;
  int trouver = 0;

  while (start <= end)
  {
    mill = (start + end) / 2;
    if (strcasecmp(Product[mill].Product_Name, Search_Nom) == 0)
    {
      trouver = 1;
      printf("---------------- Produit Trouver ----------------------\n");
      printf("Produit ID : %d\n", Product[mill].Product_ID);
      printf("Produit Nom : %s\n", Product[mill].Product_Name);
      printf("Produit Categorie: %s\n", Product[mill].Categorie.Categorie_Nom);
      printf("Produit Prix : %.2f\n", Product[mill].Product_Prix);
      printf("Produit Stock : %d\n", Product[mill].Product_Stock);
      printf("Produit Description : %s\n", Product[mill].Product_Description);
      break;
    }
    else if (strcasecmp(Product[mill].Product_Name, Search_Nom) > 0)
    {

      end = mill - 1;
    }
    else
    {
      start = mill + 1;
    }
  }
  if (!trouver)
  {
    printf(RED "Pas d produit avec cet Nom" RESET);
  }
}



void Recherch_Par_Categoire(char Search_categorie[100])
{
  bool trouver = false;
  for (int i = 0; i < List_Prouits_size; i++)
  {
    if (strcasecmp(Product[i].Categorie.Categorie_Nom, Search_categorie) == 0)
    {
      trouver = true;
      printf("---------------- Produit Trouver ----------------------\n");
      printf("Produit ID : %d\n", Product[i].Product_ID);
      printf("Produit Nom : %s\n", Product[i].Product_Name);
      printf("Produit Categorie: %s\n", Product[i].Categorie.Categorie_Nom);
      printf("Produit Prix : %.2f\n", Product[i].Product_Prix);
      printf("Produit Stock : %d\n", Product[i].Product_Stock);
      printf("Produit Description : %s\n", Product[i].Product_Description);
    }
    if (!trouver)
    {
      printf(RED "Pas d produit avec cet Categorie\n" RESET);
    }
  }
}


