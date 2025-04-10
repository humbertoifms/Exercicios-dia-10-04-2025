#include <stdio.h>

int main() {
  int altura;
  char genero;  

  printf("Insira sua altura em centimetros: \n");
  scanf(" %d", &altura);

  printf("Insira seu genero com o caractér m ou f: \n");
  scanf(" %c", &genero);  

  if (genero == 'm') {
    if (altura > 175){
      printf("Você esta acima da média nacional\n");
    }
    if (altura == 175){
      printf("Você esta exatamente na média nacional\n");
    }else {
      printf("Você esta abaixo da média nacional\n");
    }
  }

  if (genero == 'f'){
    if (altura > 162){
      printf("Você esta acima da média nacional\n");
    }
    if (altura == 162){
      printf("Você esta exatamente na média nacional\n");
    }else {
      printf("Você esta abaixo da média nacional\n");
    }
  }

  return 0;
}