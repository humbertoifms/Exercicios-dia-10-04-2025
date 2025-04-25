/*
  Esse programa calcula a resistencia equivalete de um circuito com duas 
resistencias em série definidas pelo ususario.
  Primeiro o usuario define os valores das resistências (r1 e r2) depois 
o programa faz a soma das resistências, porque a "req" de um circuito em série é 
a soma das resistencias, e no final o programa imprimi o resultado na tela do terminal. 
*/

#include <stdio.h>

int main() {
  int r1, r2, req;
  printf("Insira os valores de dois resistores em série: ");
  scanf(" %d %d", &r1, &r2);
  req = r1 + r2;
  printf("Resistência equivalente é: %d\n", req);
}