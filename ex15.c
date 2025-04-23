#include <stdio.h>

int main() {
  int n1, n2;
  char c1, c2, c3;
  float n3;
  printf("Insira 2 números inteiros: ");
  scanf("%d %d", &n1, &n2);
  
  printf("Insira 3 caracteres: ");
  scanf("%c %c %c", &c1, &c2, &c3);
  
  printf("Insira um número real: ");
  scanf("%f", &n3);
  
  printf("Esses são seus valores: %f %c %c %c %d %d\n", n3, c1, c2, c3, n1, n2);
  return 0;
}