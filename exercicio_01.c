/*
  Esse programa verifica se seu triangulo é equilatero, isóceles ou escaleno
por meio de condições if else. 
  Primeiro um array de inteiros (lado) é declarado; um laço de repetição é 
inserido passando por todos os espaços do array para inserir os valores
(os lados do triangulo de sua preferência) dentro dele; em seguida 
começam as etapas de verificação dos lados do triangulo; se todos os lados
forem iguais então e equilatero; ou se pelo menos o primeiro lado for igual
ao segundo ou o segundo for igual ao terceiro lado ou o primeiro lado for
igual ao terceiro lado então é isóceles; se não for nenhuma dessas opções 
então só pode ser escaleno.
*/

#include <stdio.h>

int main(){
  printf("Bem vindo ao programa que verifica se seu triangulo é:\nEquilátero, Isóceles ou Escaleno\n\n");

  int lado[3];

  printf("Coloque as medidas inteiras do seu triangulo:\n");
  for (int i = 0; i < 3; i++){
    printf("%d° número: ", i + 1);
    scanf(" %d", &lado[i]);
  }
  printf("Seu triangulo é ");
  if ((lado[0] == lado[1]) && (lado[1] == lado[2])){
    printf("Equilátero");
  }else if ((lado[0] == lado[1]) || (lado[1] == lado[2]) || (lado[2] == lado[0])){
    printf("Isoceles");
  }else {
    printf("Escaleno");
  }
  printf("\n");

  return 0;
}  