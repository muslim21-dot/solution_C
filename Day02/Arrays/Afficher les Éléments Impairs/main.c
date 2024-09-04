#include <stdio.h>
#include <stdlib.h>

int main()
{
   int T[10],i,taille;
  printf("donne-moi la taille : ");
  scanf("%d",&taille);
  //--------------------------------
  for(i=0;i<taille;i++){
  printf("entrer la valeur :");
  scanf("%d",&T[i]);
  }
  //--------------------------------
  for(i=0;i<taille;i++){
    if(T[i]%2!=0)
    printf("T[%d] = %d\n",i,T[i]);
  }

    return 0;
}
