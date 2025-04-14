#include <stdio.h>

int main () {
  int n1, n2;
  int rest;
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