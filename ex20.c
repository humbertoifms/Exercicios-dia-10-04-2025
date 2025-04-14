#include <stdio.h>

int main() {
  int n1;
  printf("Quantos caracteres você quer inserir?: ");
  scanf(" %d", &n1);
  char letras[n1];
  char alfabeto[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  char alfabetoNum[26];
  int tamLetras = sizeof(letras) / sizeof(letras[0]);
  int tamAlfabeto = sizeof(alfabeto) / sizeof(alfabeto[0]);

  printf("Insira %d caracteres:\n", tamLetras);
  for (int i = 0; i < tamLetras; i++){
    printf("Insira o °%d caractere: ", i + 1);
    scanf(" %c", &letras[i]);
  }
  for (int i = 0; i < tamAlfabeto; i++){
    alfabetoNum[i] = i + 1;
  }
  for (int i = 0; i < tamLetras; i++){
    for (int j = 0; j < tamAlfabeto; j++){
      if (letras[i] == alfabeto[j]){
        letras[i] = j + 1;
      }
    }
  }
  int temp;
  for (int i = 0; i < tamLetras - 1; i++){
    for (int j = 0; j < tamLetras - 1; j++){
      if (letras[j] > letras[j + 1]){
        temp = letras[j];
        letras[j] = letras[j + 1];
        letras[j + 1] = temp;
      }
    }
  }
  for (int i = 0; i < tamLetras; i++){
    for (int j = 0; j < tamAlfabeto; j++){
      if (letras[i] == alfabetoNum[j]){
        letras[i] = alfabeto[j];
      }
    }
  }
  printf("Letras formatadas:");
  for (int i = 0; i < tamLetras; i++){
    printf(" %c", letras[i]);
  }
  printf("\n");
  return 0;
}