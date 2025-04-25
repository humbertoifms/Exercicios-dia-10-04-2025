/*
  O programa recebe um valor float pelo scanf, depois de armazenado o valor é printado na tela do terminal
pórem formatado para um número inteiro por meio do uso do "(int)" antes da variavel a ser imprimida.
*/

#include <stdio.h>

int main () {
  float n1;
  printf("Insira um valor float a seguir: ");
  scanf(" %f", &n1);
  printf("O valor formatado para inteiro é: %d\n", (int)n1);
  return 0;  
}