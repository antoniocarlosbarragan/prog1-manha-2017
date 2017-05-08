#include <stdio.h>

main()
{
  float salariobruto;
  float salarioliquido;
  
  printf("\nInforme o salário bruto do funcionário:");
  scanf("%f", &salariobruto);
    
    salarioliquido=salariobruto*0.80;
        
  printf("\nO seu salário líquido é de %.2f\n", salarioliquido);
  
  return 0;
}