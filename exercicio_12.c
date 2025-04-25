/*
  Esse programa recebe uma entrada de dados em uma string de caracteres e depois imprime a string 
na tela do terminal.
  Primeiramente a variavel string de caracteres ch1 é criada, depois ocorre a entrada de dados que são 
armazenados na (ch1), a formatação utilizada no scanf() %[^\n] serve para consideras os "espaços" na
entrada de dados.
  Depois o programa imprime a string de caracteres na tela do terminal.
*/

#include <stdio.h>

int main (){
  char ch1[30];
  printf("Insira sua variavel char com espaço de 30 caracteres: ");
  scanf(" %[^\n]", &ch1);
  printf("Essa é a sua variavel: %s\n", ch1);
}