/*
  O programa recebe dois numeros inteiros, depois faz a divisão deles e o resultado que é imprimido é formatado
para ser obrigatóriamente um número inteiro.
  Primeiro o array de numeros reais (nums) e o numero real divisão são declarados. Depois ocorre a entrada de dados
dos dois números.
  Logo após ocorre a divisão dos números onde o resultado da divisão é armazenado na variavel (divisão).
  Depois o programa imprime o valor sem estar formatado para um número inteiro, depois é imprimido na tela
o resultado da divisão formatado para um numeoro inteiro por meio do (int)divisão, o int entre parenteses antes da 
divisao é quem faz a mágia da formatação.
*/

#include <stdio.h>

int main () {
  float nums[2], divisao;
  printf("Insira dois números, a divisão dara um resultado obrigatóriamente inteiro\n");
  printf("Primeiro numero: ");
  scanf(" %f", &nums[0]);
  printf("Segundo numero: ");
  scanf(" %f", &nums[1]);
  divisao = nums[0]/nums[1];
  printf("O resultado sem formatação é: %f\n", divisao);
  printf("O resultado com formatação inteira é: %d\n", (int)divisao); 
}