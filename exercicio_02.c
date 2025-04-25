/*
  Esse programa verifica se sua altura esta abaixo, exatamente igual ou acima
da média de altura nacinal baseada no gênero da pessoa.
  Primeiro o programa pega os dados da altura e do genero por meio do scanf
depois esses dados passam pelas condições if else que verificam com base num 
valor pré definido pelo IBGE da média da altura nacional.
*/

#include <stdio.h>

int main() {
  int altura;
  char genero;  

  printf("Insira sua altura em centimetros: \n");
  scanf(" %d", &altura);

  printf("Insira seu genero com o caractér m ou f: \n");
  scanf(" %c", &genero);  

  if (genero == 'm'){
    if (altura > 175){
      printf("Você esta acima da média nacional\n");
    }else if (altura == 175){
      printf("Você esta exatamente na média nacional\n");
    }else {
      printf("Você esta abaixo da média nacional\n");
    }
  }

  if (genero == 'f'){
    if (altura > 162){
      printf("Você esta acima da média nacional\n");
    }else if (altura == 162){
      printf("Você esta exatamente na média nacional\n");
    }else {
      printf("Você esta abaixo da média nacional\n");
    }
  }

  return 0;
}