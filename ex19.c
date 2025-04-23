#include <stdio.h>

int main () {
  int nums[6];
  printf("Crie uma string de caracteres: \n");
  for (int i = 0; i < 6; i++){
    printf("Insira seu %d° número da string: ", i + 1);
    scanf(" %d", nums[i]);
  }
  printf("Essa é a sua string:\n");
  for (int i = 0; i < 6; i++){
    printf(" %d", nums[i]);
  }
  return 0;
}