#include "variables.h"
int Is_Profile_exsit = 0;
int id = 0;
int depo_Sold;
float total_invissment = 0 ;
int List_Prouits_size = sizeof(Product) / sizeof(Product[0]);



Client_Profile client[CLIENT_MAX];

Categories_struct Categorie[] = {
	{1, "Electronics"},
	{2, "Home & Kitchen"},
	{3, "Sports & Outdoors"},
	{4, "Office Supplies"},
	{5, "Sportswear"},
};

Product_Struct Product[PRODUCT_MAX] = {
	{1001, "Wireless Mouse", {1, "Electronics"}, 25.99, 150, "Ergonomic wireless mouse with USB dongle"},
	{1002, "Water Bottle", {2, "Home & Kitchen"}, 12.49, 300, "1L BPA-free insulated water bottle"},
	{1003, "Yoga Mat", {3, "Sports & Outdoors"}, 35.00, 75, "Non-slip yoga mat with carry strap"},
	{1004, "Bluetooth Speaker", {1, "Electronics"}, 45.89, 120, "Portable Bluetooth speaker with bass"},
	{1005, "LED Desk Lamp", {4, "Office Supplies"}, 22.00, 90, "Adjustable LED lamp with USB charging"},
	{1006, "Notebook", {4, "Office Supplies"}, 3.50, 500, "A5 spiral-bound lined notebook"},
	{1007, "Running Shoes", {5, "Sportswear"}, 79.99, 60, "Lightweight running shoes for men"},
	{1008, "Coffee Mug", {2, "Home & Kitchen"}, 7.99, 250, "Ceramic coffee mug, 350ml"},
	{1009, "Smartphone Stand", {1, "Electronics"}, 9.99, 180, "Adjustable mobile phone holder"},
	{1010, "USB-C Cable", {1, "Electronics"}, 5.49, 400, "1m USB-C charging/data cable"},
};
