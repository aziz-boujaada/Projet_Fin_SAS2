#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define BLUE "\033[1;34m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define MAGENTA "\033[1;35m"
#define RESET "\033[0m"

#define MAX_LENTGH 150
#define CLIENT_MAX 1
#define PRODUCT_MAX 20

typedef struct
{
    int Client_Id;
    char Nom[MAX_LENTGH];
    char Prenom[MAX_LENTGH];
    char Email[MAX_LENTGH];
    int Sold
} Client_Profile;

typedef struct
{
    int Product_ID;
    char Product_Name[MAX_LENTGH];
    char Product_Categorie[MAX_LENTGH];
    float Product_Prix;
    int Product_Stock;
    char Product_Description[MAX_LENTGH];
} Product_Struct;

Product_Struct Product[PRODUCT_MAX] = {
    {1001, "Wireless Mouse", "Electronics", 25.99, 150, "Ergonomic wireless mouse with USB dongle"},
    {1002, "Water Bottle", "Home & Kitchen", 12.49, 300, "1L BPA-free insulated water bottle"},
    {1003, "Yoga Mat", "Sports & Outdoors", 35.00, 75, "Non-slip yoga mat with carry strap"},
    {1004, "Bluetooth Speaker", "Electronics", 45.89, 120, "Portable Bluetooth speaker with bass"},
    {1005, "LED Desk Lamp", "Office Supplies", 22.00, 90, "Adjustable LED lamp with USB charging"},
    {1006, "Notebook", "Office Supplies", 3.50, 500, "A5 spiral-bound lined notebook"},
    {1007, "Running Shoes", "Sportswear", 79.99, 60, "Lightweight running shoes for men"},
    {1008, "Coffee Mug", "Home & Kitchen", 7.99, 250, "Ceramic coffee mug, 350ml"},
    {1009, "Smartphone Stand", "Electronics", 9.99, 180, "Adjustable mobile phone holder"},
    {1010, "USB-C Cable", "Electronics", 5.49, 400, "1m USB-C charging/data cable"},
};
