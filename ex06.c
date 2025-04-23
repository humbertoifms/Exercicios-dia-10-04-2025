#include <stdio.h>

int main () {
  float n1, n2, n3;
  
  printf("Insira seus 3 valores: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  
  printf("Seus valores reais dispóstos reversamente são: %d %d %d\n", n3, n2, n1);
  return 0;
} 