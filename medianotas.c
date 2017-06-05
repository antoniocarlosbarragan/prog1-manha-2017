#include <stdio.h>

int main()
{
  char nome[20];
  float av1;
  float av2;
  float media;
    
  printf("\nQual é o seu nome?\n");
  scanf("%s", nome);
  
  printf("\nEntre com a nota da Av1:");
  scanf("%f", &av1);
    
  printf("\nEntre com a nota da Av2:");
  scanf("%f", &av2);
    
  media=(av1+av2)/2;
    
  printf("\nOlá %s, a sua média foi de %.1f\n", nome, media);
  
  return 0;
}