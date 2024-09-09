#include <stdio.h>
#include <stdlib.h>

int main()
{
 char T[100];
 int conteur=0,i;
 printf("veuillez entrez la chain de caractere : ");
 gets(T);

 for(i=0;T[i]!='\0';i++){
     conteur++;
 }
printf(" la longueur : %d",conteur);
    return 0;
}
