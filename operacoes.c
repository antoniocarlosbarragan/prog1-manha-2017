#include <stdio.h>
int main ()
{
  //declara as variáveis
  int adicao;
  int subtracao;
  int multiplicacao;
  int divisao;
  int sair;
  int num;
  
  do {
  do {
    printf("\nQual operação você deseja realizar?\n");
      printf("-----------------------------------");
      printf("\n1 - Adição");
      printf("\n2 - Subtração");
      printf("\n3 - Multiplicação");
      printf("\n4 - Divisão");
      printf("\n0 - Sair\n");
      scanf("%d", &num);
   
    if(num<0 || num>4)
    printf("\nOpção inválida!!!");
      
  } while(num<0 || num>4);
       
    if(num==4)
    printf("\nOpção: 4 - Divisão");
    
    if(num==3)
    printf("\nOpção: 3 - Multiplicação");
           
    if(num==2)
    printf("\nOpção: 2 - Subtração"); 
           
    if(num==1)
    printf("\nOpção: 1 - Adição");

    if(num==0)
    printf("\nOpção: Até logo!");
  
  } while(num!=0);
    
  return 0;
}
