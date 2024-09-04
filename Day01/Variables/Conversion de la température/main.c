#include <stdio.h>
#include <stdlib.h>

int main()
{
  float K;
  int C ;
  printf("entrer la température en Celsius :");
  scanf("%d",&C);
  //----------------------------------
  K = C + 273.15;
  printf("la température en Kelvin est : %.2f",K);

    return 0;
}
