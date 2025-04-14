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