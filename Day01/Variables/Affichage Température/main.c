#include <stdio.h>
#include <stdlib.h>

int main()
{
   int C;
   printf("la tempe22rature :");
   scanf("%d",&C);
   if(C<0)
    printf("solide");
   else if(C>=0 && C<100 )
    printf("liquid");
   else
    printf("Gaz");
    return 0;
}
