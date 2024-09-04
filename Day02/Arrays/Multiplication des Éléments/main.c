#include <stdio.h>
#include <stdlib.h>

int main()
{

    int T[10],taille,i,P;
  printf("donne-moi la taille : ");
  scanf("%d",&taille);
  //--------------------------------
  for(i=0;i<taille;i++){
  printf("entrer la valeur :");
  scanf("%d",&T[i]);
  }
  //--------------------------------
  P=1;
  for(i=0;i<taille;i++){
   P=P*T[i];

  }
   printf("la Multiplication est : %d",P);
    return 0;
}
