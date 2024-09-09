#include <stdio.h>
#include <stdlib.h>
void Tbmu(int a){
int i;
for(i=1;i<=10;i++){
    printf("%d x %d = %d\n",i,a,i*a);
}

}
int main()
{
 int N;
 printf("veuillez entrer la valeur de N :");
 scanf("%d",&N);
 Tbmu(N);
 Tbmu(6);
 Tbmu(7);
 Tbmu(8);
 Tbmu(9);

    return 0;
}
