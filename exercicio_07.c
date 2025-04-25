/*
  Esse programa tem entrada de 4 numeros, ele soma os dois primeiros e depois soma os dois ultimos, depois ele divide
o resultado da primeira soma pelo resultado da segunda soma.
  Primeiro são declaradas os arrays de váriaveis float (nums e soma), nums sendo responsavel pela entrada de dados e 
soma sendo responsavel pela soma dos números, logo após ocorrem as entradas dos dados pelo usuario por meio do scanf.
  Depois é feita a primeira soma dos dois primeiros números, seu resultado fica armazenado na primeira posição do 
array soma, logo após é feita a segunda soma que fica armazenada na segunda posição do array.
  Depois de tudo isso é feita a divisão da primeira soma com a segunda soma e logo após o resultado da divisão é mos-
trado na tela do terminal.
*/

#include <stdio.h>

int main() {
  float nums[4], soma[2];  
  float divisao;

  printf("Insira o primeiro número: \n");
  scanf(" %f", &nums[0]);

  printf("Insira o segundo número: \n");
  scanf(" %f", &nums[1]);  

  printf("Insira o terceiro número: \n");
  scanf(" %f", &nums[2]);

  printf("Insira o quarto número: \n");
  scanf(" %f", &nums[3]);

  soma[0] = nums[0] + nums[1];
  soma[1] = nums[2] + nums[3];
  divisao = soma[0] / soma[1];  
  printf("Esse é o resultado da divisão da soma dos primeiros números com a soma dos dois ultimos números: %f\n", divisao);

  return 0;
}