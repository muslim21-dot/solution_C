#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10],taille,i,S;
  printf("donne-moi la taille : ");
  scanf("%d",&taille);
  //--------------------------------
  for(i=0;i<taille;i++){
  printf("entrer la valeur :");
  scanf("%d",&T[i]);
  }
  //--------------------------------
  S=0;
  for(i=0;i<taille;i++){
   S=S+T[i];

  }
   printf("la somme est : %d",S);
    return 0;
}
