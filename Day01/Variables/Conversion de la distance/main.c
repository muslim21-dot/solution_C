#include <stdio.h>
#include <stdlib.h>

int main()
{
  float yards,km;
  printf("entrer la distance en kilomètres :");
  scanf("%f",&km);
  //----------------------------------
  yards = km * 1093.61;
  printf(" la transforme en yards est : %.2f",yards);

    return 0;
}
