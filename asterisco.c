#include <stdio.h>

int main ()
{
  int ast, tamanho, col;
  
  printf("\nInforme a quantidade de asteriscos:\n");
  scanf("%d", &ast);
  
  for(col=1;col<=ast;col++)
  {
  for(tamanho=1; tamanho<=ast; tamanho++)
  {
    printf("*");
  }
   printf("\n");
  }
return 0;
}