#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10],taille,i,Max;
  printf("donne-moi la taille : ");
  scanf("%d",&taille);
  //--------------------------------
  for(i=0;i<taille;i++){
  printf("entrer la valeur :");
  scanf("%d",&T[i]);
  }
  //--------------------------------
 Max = T[0];
 for(i=0;i<taille;i++){
 if(T[i]>Max)
    Max=T[i];
 }
 printf("le Maximum est : %d",Max);
    return 0;
}
