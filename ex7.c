#include <stdio.h>

int main() 
{
  float n1, n2, n3, n4, soma1, soma2;  
  float divisao;

  printf("Insira o primeiro número: \n");
  scanf(" %f", &n1);

  printf("Insira o segundo número: \n");
  scanf(" %f", &n2);

  soma1= n1 + n2;  

  printf("Insira o terceiro número: \n");
  scanf(" %f", &n3);

  printf("Insira o quarto número: \n");
  scanf(" %f", &n4);

  soma2 = n3 + n4;
  divisao = soma1 / soma2;  
  printf("Esse é o resultado da divisão da soma dos primeiros números com a soma dos dois ultimos números: %f\n", divisao);

  return 0;
}