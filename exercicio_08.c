/*
  Esse programa recebe seu genero, nome e altura, depois imprime essas informações na tela do terminal.
  Primeiramente são declaradas as strings de caracteres (nome e genero) depois é declarado o valor inteiro (altura),
logo após ocorre a entrada dos dados pelo scanf, detalhe importante: o scanf do nome possui na sua formatação o %[^\n]
para considerar os "espaços" no nome.
  Depois de inseridos os valores o programa imprime eles na tela do terminal.
*/

#include <stdio.h>

int main() {
  char nome[50], genero[50];
  int altura;

  printf("Insira o seu nome: ");
  scanf(" %[^\n]", &nome);

  printf("Insira seu genero: ");
  scanf(" %s", &genero);

  printf("Insira sua altura em cm: ");
  scanf(" %d", &altura);

  printf("\nEsse é seu nome: %s\nSeu gênero: %s\nSua altura em centimetros: %d\n", nome, genero, altura);
  
  return 0;
}