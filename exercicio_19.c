/*
  Esse programa faz a entrada de dois numeros reais pelo usuario, depois faz a divisão dos numeros.
  Depois ele mostra na tela de terminal o resultado da operação
*/

#include <stdio.h>

int main() {
  float n1, n2;
  printf("Insira o primeiro número real: ");
  scanf(" %f", &n1);
  printf("Insira o segundo número real: ");
  scanf(" %f", &n2);
  n1 = n1 / n2;
  printf("O resultado da divisão aproximado para um número inteiro é %d\n", (int)n1);
  return 0;
}