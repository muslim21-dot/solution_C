#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[20],prenom[20],sexe,adsem[20];
    int age;
    printf("entrer le nom :" );
    scanf("%s",nom);
    //-------------------------------
    printf("entrer le prenom :" );
    scanf("%s",prenom);
    //-------------------------------
    printf("entrer le sexe :" );
    scanf(" %c",&sexe);
    //-------------------------------
    printf("entrer l adsem :" );
    scanf("%s",adsem);
    //-------------------------------
    printf("entrer l age :" );
    scanf("%d",&age);
    //*******************************

    printf("le nom est : %s\n",nom);
     printf("le prenom est : %s\n",prenom);
      printf("le sex est : %c\n",sexe);
       printf("le adsem est : %s\n",adsem);
        printf("l age est : %d\n",age);




 return 0;
}
