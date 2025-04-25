/*
  Esse programa recebe 3 numeros inteiros nas variaveis a, b, c
e depois mostra eles na tela.
*/

#include <stdio.h>

int main(){
  int a, b, c;

  printf("Insira 3 números inteiros a seguir: ");

  scanf(" %d %d %d", &a, &b, &c);  

  printf("Esses são seus numeros: %d %d %d\n", a,b,c);
  
  return 0;
}