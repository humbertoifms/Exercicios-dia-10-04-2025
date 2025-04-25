/*
  Esse programa recebe uma sequência de 6 números digitados pelo usuario e verifica se ele
ganhou o sorteio.
  Primeiramente ocorre a declaração das variaveis, depois disso o programa paça por um laço de re-
petição responsavel por escanear a lista digitada pelo usuario e ao mesmo tempo tratar erros.
depois disso a lista digitada pelo usuario passa por outro laço de repetição, e dentro desse laço
existe outro laço de repetição for. Esses laços são usados para verificar as posiçoes dos numeros 
que foram inseridos pelo usuario, e se o numero anterior for maior que seu sucessor, ou seja, em 
ordem decrescente, o programa troca suas posições, esse processo se repete enquanto a referencia 
dos dois laços são menores que o tamanho da string numeros.
  Depois disso o programa passa por outro laço de repetição que verifica se a lista de numeros do 
usuario é igual a lista dos numeros do sorteio. O resultado é imprimido na tela do terminal
*/

#include <stdio.h>

int main (){
  int numSorteio[] = {1,3,6,8,10,14};
  int numInput[6], temp;
  printf("Insira 6 números de 1 a 15\n");
  for (int i = 0; i < 6; i++){
    printf("Insira o °%d: ", i + 1);
    scanf(" %d", &numInput[i]);
    if (numInput[i] > 15 || numInput[i] < 1){
        printf("Número invalido, tente novamente!\n");
        i = i - 1;
    }
  }
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      if (numInput[j] > numInput[j + 1]){
        temp = numInput[j];
        numInput[j] = numInput[j + 1];
        numInput[j + 1] = temp;
      }
    }
  }
  for (int i= 0; i <6; i++){
    if (numInput[i] != numSorteio[i]){
      printf("Oh não, não foi dessa vez :(\n");
      return 1;
    }
  }
  printf("Parabens! Você ganhou!\n");
  return 0;
}