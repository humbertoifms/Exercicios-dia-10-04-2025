#include <stdio.h>

int main () {
  int n1, n2, n3;
  
  printf("Insira suas 3 notas: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  
  int media = n1 + n2 + n3;
  media = media/3;
  printf("Sua média é: %d\n", media);
  
  return 0;
}