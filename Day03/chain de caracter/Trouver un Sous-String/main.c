#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char T1[50],T2[50];
    printf("veuillez entrez la chain de caracter :");
    gets(T1);
    printf("entrez la chain que vous recherchiez :");
    gets(T2);
    if(strstr(T1,T2)){
        printf("Finded !");
    }else{
        printf("Not Finded !");

    }



    return 0;
}
