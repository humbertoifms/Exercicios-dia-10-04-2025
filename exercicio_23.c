/*
  Esse programa calcula a sequência de fibonacci. soma dos dois anteriores, começando normalmente com 0 e 1. 
Assim, a sequência é: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, e assim por diante.
  Primeiro são declaradas as variaveis (temp, rep), como a sequencia sempre começa com os numeros 0 e 1
então foram declaradas as variaveis (n1 e n2), começando com os valores 0 e 1 respectivamente
  Depois o programa pede para o usuario digitar a quantidade de numeros da sequencia que serão gerados
e depois disso o programa entra em um laço de repetição que tem como referencia quantidade de  numeros
digitados pelo usuario, esse loop é responsavel por gerar a sequência.
  Dentro do loop a variavel temp (temporaria) toma o valor do numero n2, depois o numero n2 se transforma 
na soma do primeiro numero (n1) com o segundo numero em si (n2), após isso o valor do primeiro número (n1)
é printado na tela do terminal e o primeiro número toma o valor da variavel temp (n2 antes de ser somado).
*/

#include <stdio.h>

int main () {
  printf("Esse programa calcula a sequência de fibonacci\n");
  int temp, rep;
  int n1 = 0;
  int n2 = 1;
  printf("Insira a quantidade de números da sequência você quer gerar:\n");
  scanf(" %d", &rep);
  for (int i = 0; i < rep; i++){
    temp = n2;
    n2 = n1 + n2;
    printf("%d ", n1);
    n1 = temp;
  }
  printf("\n");
  return 0;
}