#include <stdio.h>

int main () {
  float n1;
  printf("Insira um valor float a seguir: ");
  scanf(" %f", &n1);
  printf("O valor formatado para inteiro é: %d\n", (int)n1);
  return 0;  
}