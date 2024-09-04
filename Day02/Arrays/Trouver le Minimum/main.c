#include <stdio.h>
#include <stdlib.h>

int main()
{
 int T[10],taille,i,Min;
  printf("donne-moi la taille : ");
  scanf("%d",&taille);
  //--------------------------------
  for(i=0;i<taille;i++){
  printf("entrer la valeur :");
  scanf("%d",&T[i]);
  }
  //--------------------------------
 Min = T[0];
 for(i=0;i<taille;i++){
 if(T[i]<Min)
    Min=T[i];
 }
 printf("le Minimum est : %d",Min);

    return 0;
}
