#include <stdio.h>
#include <stdlib.h>

int main()
{
  int T[10],taille,i;
  printf("donne-moi la taille : ");
  scanf("%d",&taille);
  //--------------------------------
  for(i=0;i<taille;i++){
  printf("entrer la valeur :");
  scanf("%d",&T[i]);
  }
  //--------------------------------
  for(i=0;i<taille;i++){
  printf("T[%d] = %d\n",i,T[i]);
  }

    return 0;
}
