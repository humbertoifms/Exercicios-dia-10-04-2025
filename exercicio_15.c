/*
  Esse programa le 3 numeros inseridos pelo usuario e depois calcula a media.
  Primeiro ocorre a declaração das variaves dos numeros e da soma, depois ocorre a leitura dos dados feita
pelo usuario. Depois ocorre a soma dos 3 numeros, o resultado é armazenado na variavel (soma). Logo após a
variavel soma recebe o valor do resultado da soma dos 3 numeros dividido por 3.
  Assim o programa imprime a variavel soma que possui o resultado do calculo da média dos numeros.
*/

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