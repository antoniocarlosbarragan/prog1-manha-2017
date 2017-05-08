#include <stdio.h>

main ()
{
  int x;
  int y;
  int soma;
  int subtracao;
  float divisao;
  int multiplicacao;
  
  x=5;
  y=10;
  soma=x+y;
  subtracao=x-y;
  divisao=(float)x/y;
  multiplicacao=x*y;
  
  printf("\nResultado da soma = %d\n", soma);
  printf("\nResultado da subtração = %d\n", subtracao);
  printf("\nResultado da divisão = %f\n", divisao);
  printf("\nResultado da multiplicação = %d\n", multiplicacao);
  
  return 0;
}