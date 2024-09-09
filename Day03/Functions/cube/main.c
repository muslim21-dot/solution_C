#include <stdio.h>
#include <stdlib.h>

float cube(float N ){
float C ;
C=N*N*N;
return C;
}

int main()
{
 float N;
 printf("veuillez entrer l valeur de N :");
 scanf("%f",&N);
 cube(N);
 printf("le cube de %.2f est : %.2f",N,cube(N));

    return 0;
}
