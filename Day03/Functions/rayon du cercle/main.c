#include <stdio.h>
#include <stdlib.h>
float diametre(float A ){
   float D;
   D = A * 2;
   return D;
}
float surface(float B){
return B * B *3.14 ;
}
float perimetre (float C){
return C * 2 * 3.14;
}

int main()
{
  float R ;
  printf("veuillez entrer le rayOn du cercle : ");
  scanf("%f",&R);
  printf("le diametre est : %.2f\n",diametre(R));
  printf("le surface est : %.2f\n",surface(R));
  printf("le perimetre est : %.2f\n",perimetre(R));

    return 0;
}
