#include <stdio.h>

int main()
{
float notas [4][3], media;
int i, j, mat;
   
for (i=0; i<=3; i++)
{
  for (j=0; j<=2; j++)
  {
  printf("Entre com a Av%d do aluno %d:", j+1, i+1);
  scanf("%f", &notas[i][j]);
  }
  
  printf("\n");
}

  printf("Notas da Av1:\n");

for(i=0; i<=3; i++)
{
  printf("Aluno %d - %2.f\n", i+1, notas[i][0]);
}
  
  printf("\n");
  
  printf("\nEntre com a sua matricula[1-4]:\n");
  scanf("%d", &mat);
  i=mat-1;
  
  media=(notas[i][0] + notas[i][1] + notas [i][2])/3;
  
  printf("\nNotas do aluno%d", mat);
  
  for(j=0; j<=2; j++)
  {
   printf("\nAv%d = %2.f\n", j+1, notas[i][j]); 
  }
    
  printf("\nMédia final = %2.f\n", media);

  printf("\n");
  
return 0;
}