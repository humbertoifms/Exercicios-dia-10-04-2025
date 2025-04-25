/*
  Esse programa mostra os anos bissexttos em um determinado intervalo de tempo
primeiro são declaradas as variaveis que vão receber as datas, depois são usa-
dos dois scanf para escanear a primeira data e a segunda data do intervalo de
tempo.
  Após isso esse dados vão para condição de tratamento de erro onde se a pri-
meira data for maior que a segunda data o programa para a execução.
  Se não tiverem erros, o programa passa por um laço de repetição while que é
mantido pela condição da primeira data ser menor ou igual a segunda data.
  Dentro do laço de repetição o programa abre uma condição if, se a divisão da
primeira data por 4 der resto = 0, então é bissexto e vai ser printado na tela
do terminal, se não for o programa simplismente segue rodando.
  Independente dos ano ser bissexto ou não o laço vai somar +1 para a primeira
data até que a condição que mantem o laço de repetição não valer mais.
*/

#include <stdio.h> 

int main() {
  printf("Esse programa te mostra os anos bissextos em um determinado intervalo de tempo!\n");
  int d1, d2;

  printf("Insira a primeira data: \n");
  scanf(" %d", &d1);

  printf("Insira a segunda data: \n");
  scanf(" %d", &d2);  

  if (d2 <= d1) {
    printf("Erro, a segunda data é menor ou igual a primeira\n");
    return 1;
  }else {
    printf("Esses são os anos bissextos: ");
    while (d1 <= d2){
      if (d1 % 4 == 0) {
        printf(" %d", d1);
      }
      d1++;
    }
    printf("\n");
  }

  return 0;
}