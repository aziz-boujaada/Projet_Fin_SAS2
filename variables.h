#ifndef VARIABLES_H
#define VARIABLES_H

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define BLUE "\033[1;34m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define MAGENTA "\033[1;35m"
#define RESET "\033[0m"

#define MAX_LENTGH 150
#define CLIENT_MAX 1
#define PRODUCT_MAX 10

typedef struct
{
    int Client_Id;
    char Nom[MAX_LENTGH];
    char Prenom[MAX_LENTGH];
    char Email[MAX_LENTGH];
    int Sold;
} Client_Profile;

typedef struct
{
    int CategorieID;
    char Categorie_Nom[MAX_LENTGH];
} Categories_struct;

typedef struct
{
    int Product_ID;
    char Product_Name[MAX_LENTGH];
    Categories_struct Categorie;
    float Product_Prix;
    int Product_Stock;
    char Product_Description[MAX_LENTGH];
} Product_Struct;

// Extern declarations for global variables
extern Client_Profile client[CLIENT_MAX];
extern Categories_struct Categorie[];
extern Product_Struct Product[PRODUCT_MAX];

#endif // VARIABLES_H