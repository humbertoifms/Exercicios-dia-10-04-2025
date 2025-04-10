#include <stdio.h>

int main (){
  char ch1[30]= "";
  printf("Insira sua variavel char de 30 caracteres: ");
  scanf(" %[^\n]", &ch1);
  printf("Essa é a sua variavel: %s\n", ch1);
}