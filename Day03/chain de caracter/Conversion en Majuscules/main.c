#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char T[30];
  printf("veuillez entrez la chain de caractere :");
  gets(T);
  puts(strupr(T));
    return 0;
}
