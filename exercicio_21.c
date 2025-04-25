/*
  Esse programa faz a leitura de dois números inteiros(n1 e n2), depois calcula o resto da divsão entre os
dois numeros, depois disso o programa pega o resto da divisão e verifica se é par ou não pela condição if else.
  O resto da divisão é dividido por 2, se o resto dessa nova divisão for 0 então o resto da primeira divisão é par,
se não o resto da primeira divisão é impar, depois o programa imprimi isso na tela.
*/

#include <stdio.h>

int main () {
  int n1, n2, rest;
  printf("Insira dois números reais: ");
  scanf(" %d %d", &n1, &n2);
  rest = n1 % n2;
  printf("O resto da divisão ( %d ) é ", rest);
  if ((rest % 2) == 0){
    printf("par");
  }else {
    printf("impar");
  }
  printf("\n");
  return 0;
}