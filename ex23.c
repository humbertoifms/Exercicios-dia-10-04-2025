#include <stdio.h>

int main () {
  printf("Esse programa calcula a sequência de fibonacci\n");
  int temp, rep;
  int n1 = 0;
  int n2 = 1;
  printf("Insira a quantidade de números da sequência você quer gerar:\n");
  scanf(" %d", &rep);
  for (int i = 0; i < rep; i++){
    temp = n2;
    n2 = n1 + n2;
    printf("%d ", n1);
    n1 = temp;
  }
  printf("\n");
  return 0;
}