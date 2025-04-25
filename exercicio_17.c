/*
  Esse programa organiza os numeros inseridos pelo usuario em ordem crescente.
  Primeiramente ocorre a declaração das variaveis (temp, numeros[5], tamanho), a variavel tamanho recebe o valor
do tamanho da string numeros(no caso 5) para ser usado como referência nos laços de repetição. Depois o programa 
entra num laço de repetição for que passa recebendo dados do usuário por cada posição da string numeros.
  Depois o programa entra em outro laço de repetição for, e dentro desse laço de repetição existe outro laço de
repetição for. Esses laços são usados para verificar as posiçoes dos numeros que foram inseridos pelo usuario, e
se o numero anterior for maior que seu sucessor, ou seja, em ordem decrescente, o programa troca suas posições,
esse processo se repete enquanto a referencia dos dois laços são menores que o tamanho da string numeros.
  Depois dos numeros ficarem organizados o programa entra em outro laço de repetição que imprime cada numero da
string formatada de maneira crescente.
*/

#include <stdio.h>

int main() {
  int temp;
  int numeros[5];
  int tamanho = sizeof(numeros) / sizeof(numeros[0]);
  printf("Esse programa ordena os numeros em ordem crescente\n\n");
  printf("Insira 5 números: \n");
  for (int i = 0; i < tamanho; i++){
    printf("Digite o valor %d: ", i + 1);
    scanf(" %d", &numeros[i]);
  }

  for (int i = 0; i < tamanho - 1; i++){
    for (int a = 0; a < tamanho - 1; a++){
      if(numeros[a] > numeros[a +1]){
        temp = numeros[a];
        numeros[a] = numeros[a + 1];
        numeros[a + 1] = temp; 
      }
    }
  }
  printf("Sua sequencia de números: ");
  for (int i = 0; i < tamanho; i++){
    printf("%d ", numeros[i]);
  }
  printf("\n");
  return 0;
}