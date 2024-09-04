#include <stdio.h>
#include <stdlib.h>

int main()
{
  int T[10],i,N,taille,VR;
  printf("donne-moi la taille : ");
  scanf("%d",&taille);
  //--------------------------------
  for(i=0;i<taille;i++){
  printf("entrer la valeur :");
  scanf("%d",&T[i]);
  }
  //--------------------------------
  printf("entrer la valeur de N : ");
  scanf("%d",&N);
  //--------------------------------
  VR=0;
  for(i=0;i<taille;i++){
      if(N==T[i])
        VR=1;
  }
    if(VR==1)
        printf("oui : %d",N);
    else
        printf("Non!");
    return 0;
}
