#include <stdio.h>

int main () {
  char c1;
  printf("Digite a vogal -> o: ");
  scanf(" %c", &c1);
  if (c1 != 'o'){
    printf("Erro: input ivalido\n");
    return 1;
  }else {
    printf("e\n");
  }
  return 0;
}