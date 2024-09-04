#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10],i,taille,VR,NV;
  printf("donne-moi la taille : ");
  scanf("%d",&taille);
  //--------------------------------
  for(i=0;i<taille;i++){
  printf("entrer la valeur :");
  scanf("%d",&T[i]);
  }
  //--------------------------------
  printf("entrer la valeur a remplacer : %d");
  scanf("%d",&VR);
  //--------------------------------
  printf("entrer la nouvelle valeur : %d");
  scanf("%d",&NV);
  //--------------------------------
  for(i=0;i<taille;i++){
  if(T[i]==VR)
    T[i]=NV;
  }
  for(i=0;i<taille;i++){
    printf("T[%d] = %d",i,T[i]);
  }

    return 0;
}
