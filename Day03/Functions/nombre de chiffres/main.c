#include <stdio.h>
#include <stdlib.h>
int nomber_chif(long N){
 int nbr=0 ;
 do{
    N=N/10;
    nbr++;
 }while(N!=0);
 return nbr;
 }
int main()
{
    long n;
   printf("veuillez entrer le nombre : ");
   scanf("%ld",&n);
   printf("le total de chiffres est : %d",nomber_chif(n));
    return 0;
}
