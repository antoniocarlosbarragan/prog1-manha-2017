#include <stdio.h>

int main()
{
  char letra;
  
  printf("\nDigite uma letra:");
  scanf("%c", &letra);
  
  if ((letra>=65)&&(letra<=90))
  {
    printf("\nLetra digitada é maiúscula!\n");
    printf("\nConvertida para letra minúscula= %c\n\n", letra+32);
  }
  if ((letra>=97)&&(letra<=122))
  {
    printf("\nA letra digitada é minúscula!\n");
    printf("\nConvertida para letra maiúscula= %c\n\n", letra-32);
  }
  if((letra>=48)&&(letra<=57))
  
    printf("\nVocê digitou um número!\n");
      
  return 0;
}