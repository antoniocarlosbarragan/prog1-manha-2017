#include <stdio.h>

int main()
{
        int i;
    printf("\nTABELA ASCII");
    printf("\n_______________________\n");
    printf("\nDec \t Char\n");
    
  for(i=33; i<=126; i++)
        {
            printf("\n%d \t %c\n", i, i);
        }
  return 0;
}