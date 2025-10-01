// gestion de profil function

int Ajouter_Profil(int id);
int Modification_Profil(int id);
int Afficher_Profile(int id);
int Check_Profile_Exist();
// gestion de sold 
void Gestion_Sold();
int Consultation_Sold(int id);
int Depot_Argent(int id , int depo_Sold);

// gestion de Produit 
void Afficher_Produit();
void Recherch_Par_Nom(char Search_Nom[100]);
void Recherch_Par_Categoire(char Search_categorie[100]);
void Tri_Par_Prix();
void Tri_Par_Nom();


int Selection_Produit(int Select_Id);
int Achat_proccecur(int Select_Id);