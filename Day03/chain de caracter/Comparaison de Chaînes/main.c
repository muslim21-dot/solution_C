#include <stdio.h>
#include <stdlib.h>

int main()
{
   char T1[50];
   char T2[50];
   printf("entrez la chain de caractere 1 : ");
   gets(T1);
   printf("entrez la chain de caractere 2 : ");
   gets(T2);
   if(strcmp(T1,T2)==0)
    printf("oui et compare ");
   else
    printf(" Non");
    return 0;
}
