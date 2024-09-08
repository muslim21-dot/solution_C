#include <stdio.h>
#include <stdlib.h>
#include <string.h>

     char titre[60][50];
     char auteur[60][50];
     float prix[60];
     int quantite[60];
     int nbr_livre,i;
//-----------------------Ajouter un livre au stock---------------------
     void Ajouter(){

      for(int i=0;i<nbr_livre;i++){
        printf("entrer les informations de livre : %d\n",i+1);
        printf("entrer le titre de livre : ");
          scanf("%s",&titre[i]);
        printf("entrer auter de livre : ");
          scanf("%s",&auteur[i]);
        printf("entrer le prix de livre : ");
          scanf("%f",&prix[i]);
        printf("entrer le quantite de livre : ");
        scanf("%d",&quantite[i]);
        printf("------------------------------------------\n");
      }
}
//------------------Afficher tous les livres disponibles-------------------------

void Afficher(){
      for(int i=0;i<nbr_livre;i++){
      printf("\n\n**************le livre : (%d)*******************\n",i+1);
      printf("le titre de livre : %s\n",titre[i]);
      printf("entrer auter de livre : %s\n",auteur[i]);
      printf("entrer le prix de livre : %.2f\n",prix[i]);
      printf("entrer le quantite de livre : %d\n",quantite[i]);
      }
}
//-------------------Rechercher un livre par son titre----------------------
void rechercher(){
    char titrre[50];
    printf("doneez-moi le nom de livre que vous rechercher : ");
    scanf("%s",&titrre);
    for(i=0;i<nbr_livre;i++){
         if(strcmp(titrre,titre[i])==0){
           printf("le titre de livre est : %s\n",titre[i]);
           printf("auter de livre est : %s\n",auteur[i]);
           printf(" le prix de livre est : %.2f\n",prix[i]);
           printf("la  quantite de livre est : %d\n",quantite[i]);
         }
    }
}
//---------------------Mettre à jour la quantité d'un livre----------------
void Metter_jour(){
    int Nouv_quantitee;
    char titrre[50];
    printf("doneez-moi le nom de livre que vous rechercher : ");
    scanf("%s",&titrre);
    printf("donnez-moi la nouvelle quantite : ");
    scanf("%d",&Nouv_quantitee);
    for(i=0;i<nbr_livre;i++){
         if(strcmp(titrre,titre[i])==0){
          quantite[i]=Nouv_quantitee;
           printf("le titre de livre est : %s\n",titre[i]);
           printf("auter de livre est : %s\n",auteur[i]);
           printf(" le prix de livre est : %.2f\n",prix[i]);
           printf("la  quantite de livre est : %d\n",quantite[i]);
         }
    }
}
//----------------------Supprimer un livre du stock-----------------
void Supprimer(){
char titrre[50];
    printf("doneez-moi le nom de livre que vous rechercher : ");
    scanf("%s",&titrre);
    for(i=0;i<nbr_livre;i++){
         if(strcmp(titrre,titre[i])==0){
    for(int j=i;j<nbr_livre;j++){
        strcpy(titre[i],titre[i+1]);
        strcpy(auteur[i],auteur[i+1]);
        prix[i] = prix[i+1];
        quantite[i]= quantite[i+1];
        nbr_livre--;
    }
         }
         }
}
//-------------Afficher le nombre total de livres en stock---------
void total_livre(){
    int total=0;
   for(i=0;i<=nbr_livre;i++){
       total+=quantite[i];
     }
  printf("\nle Nombre Total de Livres en Stock est : %d",total);
}
//---------------------------------------------------------------
int main()
{
    int option;

    printf("veuillez entrer les nombre de livre :");
    scanf("%d",&nbr_livre);
    do{
         printf("\n-----------------menu-----------------------\n");
      printf("1. Ajouter un livre au stock .\n");
      printf("2. Afficher tous les livres disponibles.\n");
      printf("3. Rechercher un livre par son titre.\n");
      printf("4. Mettre à jour la quantité d un livre.\n");
      printf("5. Supprimer un livre du stock.\n");
      printf("6. Afficher le nombre total de livres en stock.\n");
      printf("\n\nChoisissez votre option : ");
         scanf("%d",&option);
      switch(option){
             case 1 : Ajouter();

               break;
             case 2 : Afficher();
                     break;
             case 3 : rechercher();
                     break;
             case 4 : Metter_jour();
                     break;
             case 5 : Supprimer();
                     break;
             case 6 : total_livre();
                     break;
             default :
                 printf("\nNull!");
                     break;
      }
    }while(option != 7);



           return 0;
}
