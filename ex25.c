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
    if (numInput[i] == numSorteio[i]){
      i = i;
    }else {
      printf("Oh não, não foi dessa vez :(\n");
      return 1;
    }
  }
  printf("Parabens! Você ganhou!\n");
  return 0;
}