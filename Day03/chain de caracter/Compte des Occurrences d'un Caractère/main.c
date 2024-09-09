#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char T[50];
   char lettre;
   int i;
   int conteure=0;
   printf("entrez la chain de caractere : ");
   gets(T);
  // scanf("%s",T);
   printf(" entrez la lettre vous recherchez :");
   scanf(" %c",&lettre);
   for(i=0;i<strlen(T);i++){
      if(T[i]==lettre)
        conteure++;
   }
   printf("le nombre de repetitons pour ce caractere est : %d",conteure);
    return 0;
}
