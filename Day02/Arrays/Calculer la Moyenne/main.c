#include <stdio.h>
#include <stdlib.h>

int main()
{
  int taille1,taille2;

  printf("donne-moi la taille1 : ");
  scanf("%d",&taille1);
  //-------------------------------
  printf("donne-moi la taille2 : ");
  scanf("%d",&taille2);
  //-------------------------------
  int T[taille1],M[taille2]i,A[taille1+taille2];

  for(i=0;i<taille1;i++){
  printf("entrer la valeur de tableau T :");
  scanf("%d",&T[i]);
  }
  //--------------------------------
  for(i=0;i<taille2;i++){
  printf("entrer la valeur de tableau M :");
  scanf("%d",&M[i]);
  //--------------------------------
  for(i=0;i<taille1+taille2;i++){
    printf("A[%d] = %d\n",i,A[i]);
  }
    return 0;
}
