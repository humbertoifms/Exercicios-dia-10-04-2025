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