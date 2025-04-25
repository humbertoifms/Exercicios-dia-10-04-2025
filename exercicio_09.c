/*
  Esse programa verifica se o numero inteiro é impar ou par.
  Primeiramente são declaradas a váriavel (numero) depois ocorre uma entrada de dados que serão armazenados na
variavel numero. Depois a variavel entra numa condição de if else onde se na divisão da variavel pelo numero 2
o resto da divisao der 0, o numeroo inserido é par, se não der zero então o numero é impar, e depois o programa
imprime isso na tela do terminal.
*/

#include <stdio.h>

int main (){
  printf("Esse algoritmo verifica seu o numero inteiro é par ou impar\n\n");
  int numero;
  printf("Insira seu número inteiro: ");
  scanf(" %d", &numero);
  printf("Seu numero %d é ");
  if (numero % 2 == 0){
    printf("par");
  }else {
    printf("impar");
  }
  printf("\n");
    
  return 0;
}