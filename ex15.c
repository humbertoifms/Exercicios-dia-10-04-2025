#include <stdio.h>

int main () {
  int n1, n2, n3, soma;
  printf("Insira 3 números para calcular a média:\n");
  scanf(" %d %d %d", &n1, &n2, &n3);
  soma = n1 + n2 + n3;
  soma = soma / 3;
  printf("A média deu: %d", soma);
  return 0;
}