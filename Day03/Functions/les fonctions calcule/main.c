#include <stdio.h>
#include <stdlib.h>
float Somme(float T[3]){
int i ;
float S = 0 ;
for(i = 0 ; i < 3 ; i++ ){
    S = S + T[i] ;
}
return S;
}
//--------------------------------
float Moyeen(float T[3]){
float M;
M=Somme(T)/3;
return ;
}
//--------------------------------
float Produit(float T[3]){
 float P=1;
 int i;
 for(i=0;i<3;i++){
    P = P*T[i];
 }
    return;
}
int main()
{
    float Tab [3] = {22 , 3.3 , 21 };
  printf("la somme est : %.2f\n",Somme(Tab));
  printf("la moyeen est : %.2f ",Moyeen(Tab));
  printf("le produit est : %.2f ",Produit(Tab));
    return 0;
}
