#include <stdio.h>
#include <stdlib.h>

int main()
{
     int T[10],taille,i,tmp,j;
  printf("donne-moi la taille : ");
  scanf("%d",&taille);
  //--------------------------------
  for(i=0;i<taille;i++){
  printf("donne-moi la valeur : ");
  scanf("%d",&T[i]);
  }
  //--------------------------------
  for(i=0;i<taille;i++){

     for(j=i+1;j<taille;j++){

        if(T[i]>T[j]){
          tmp=T[i];
          T[i]=T[j];
          T[j]=tmp;
        }
     }
  }
  //--------------------------------
printf("le tableau trie en ordre croissant est :\n");
 for(i=0;i<taille;i++){
printf("  %d",T[i]);
 }
    return 0;
}
