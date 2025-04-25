/*
  Esse programa recebe dois números pelo scanf, depois soma esses dois numeros.
Depois de somados o resultado da soma é armazenado em outra variavel que logo em seguida é
printada no terminal.
*/

#include <stdio.h>

int main () {
  int n1, n2, soma;
  printf("Insira dois números para serem somados: ");
  scanf(" %d %d", &n1, &n2);
  soma = n1 + n2;
  printf("A soma %d é ", soma);
  if (soma > 10){
    printf("maior que 10");
  }else {
    printf("menor ou igual a 10");
  }
  printf("\n");
  return 0;
}