/*
  Esse programa recebe um caractér, se o input foi igual a 'o' o programa "responde" no terminal com a vogal 'e'
se o input for diferente de 'o' o programa para a execuçao e imprime no terminal que o input é invalido
*/

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