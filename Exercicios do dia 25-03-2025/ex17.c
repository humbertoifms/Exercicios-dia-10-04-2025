#include <stdio.h>

int main () {
  int numeros[3], temp;
  printf("Insira seus 3 valores: \n");
  for (int i = 0; i < 3; i++){
    printf("Insira o %d° número: ", i+1);
    scanf(" %d", numeros[i]);
  }
  printf("Seus valores inteiros dispóstos reversamente são: %d %d %d\n", numeros[2], numeros[1], numeros[0]);
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 2; j++){
      if(numeros[j] > numeros[j + 1]){
        temp = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = temp;
      }
    }
  }
  printf("Seus valores inteiros dispóstos em ordem crescente são: %d %d %d\n", numeros[0], numeros[1], numeros[2]); 
  return 0;
}