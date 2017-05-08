#include <stdio.h>

main()
{
  float av1;
  float av2;
  float media;
    
  printf("\nEntre com a nota da AV1:");
  scanf("%f", &av1);
  
  printf("\nEntre com a nota da Av2:");
  scanf("%f", &av2);
  
  media=(av1+av2)/2;
    
    printf("\nA sua média foi de %.2f\n", media);
  
  return 0;
}