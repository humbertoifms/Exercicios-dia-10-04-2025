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