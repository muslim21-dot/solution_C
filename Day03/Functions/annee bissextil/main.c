#include <stdio.h>
#include <stdlib.h>

void Anne_B(int anne){
 if((anne%100!=0 && anne%4==0)||(anne%400==0))
  printf("anne %d est bissextile",anne);
 else
    printf("anne %d no bissextile",anne);
}

int main()
{
 int annee;
 printf("veuillez entrer l valeur de N :");
 scanf("%d",&annee);
 Anne_B(annee);

    return 0;
}
