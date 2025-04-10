#include <stdio.h> 

int main() 
{
  printf("Esse programa te mostra os anos bissextos em um determinado intervalo de tempo!\n");
  int d1, d2;

  printf("Insira a primeira data: \n");
  scanf(" %d", &d1);

  printf("Insira a segunda data: \n");
  scanf(" %d", &d2);  

  if (d2 <= d1) 
  {
    printf("Erro, a segunda data é menor ou igual a primeira\n");
  } else
    {
      printf("Esses são os anos bissextos: ");
      while (d1 <= d2)
      {
        if (d1 % 4 == 0) 
        {
          printf(" %d", d1);
        }
        d1++;
      }
      printf("\n");
    }
  return 0;
}