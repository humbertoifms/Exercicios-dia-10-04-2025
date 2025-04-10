#include <stdio.h>

int main() 
{
  char nome[50], genero[50];
  int altura;

  printf("Insira o seu nome: ");
  scanf(" %s", &nome);

  printf("Insira seu genero: ");
  scanf(" %s", &genero);

  printf("Insira sua altura em cm: ");
  scanf(" %d", altura);

  printf("Esse é seu nome: %s\nSeu gênero: %s\nSua altura em centimetros: %d", nome, genero, altura);
  
  return 0;
}