#include <stdio.h>
#include <stdlib.h>
void Premier (int N){
int i,estpremier;
estpremier=1;
for(i=2;i<=N/2;i++){
    if(N%i==0){
       estpremier=0;
    break;
    }

}
if(estpremier==1)
    printf("%d est nombre premier .",N);
else
    printf("%d est nombre no premier .",N);
}
int main(){
    int N;
    printf("veuillez entrer la valeur de N : ");
    scanf("%d",&N);
    Premier(N);

    return 0;
}
