/*
  Esse programa soma dois números inteiros e mostra o resultado. primeiro um array de inteiros
é criado para receber os números inteiros pelo usuario. Depois o scanf fica responsavel pela
entrada dos dados no array(nums), depois disso a é feito a soma dos dois valores sendo atribui-
da na primeira posição do array, depois o progra imprime o resultado na tela pelo printf.
*/

#include <stdio.h>

int main() {
  printf("Esse algoritimo soma dois numeros inteiro e mostra o resultado\n\n");  
  int nums[2];  

  printf("Insira o primeiro número: ");
  scanf("%d", &nums[0]);

  printf("Insira o segundo número: ");
  scanf("%d", &nums[1]);  
  
  nums[0] = nums[0] + nums[1];  
  printf("Esse é seu resultado: %d\n", nums[0]);

  return 0;
}