#include <stdio.h>
#include <stdlib.h>

int main(){

   int N1 ,N2 ,N3,m_ponderation;
   printf("entrer les nomber");
   scanf("%d %d %d",&N1,&N2,&N3);
   //------------------------------------------------------
   m_ponderation =( N1 * 2 + N2 * 3 + N3 * 5)/(2 + 3 + 5);
   //------------------------------------------------------
   printf("la moyenne ponderee est : %d",m_ponderation);
    return 0;
}
