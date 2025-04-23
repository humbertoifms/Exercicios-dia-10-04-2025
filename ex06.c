#include <stdio.h>

int main() {
  printf("Esse algoritimo soma dois numeros inteiro e mostra o resultado\n\n");  
  int n1, n2, soma;  

  printf("Insira o primeiro número: ");
  scanf("%d", &n1);

  printf("Insira o segundo número: ");
  scanf("%d", &n2);  
  
  soma = n1 + n2;  
  printf("Esse é seu resultado: %d\n", soma);

  return 0;
}