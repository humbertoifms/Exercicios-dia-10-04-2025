/*
  Esse programa deixa em ordem alfabetica a sequência de caracteres que o usuario vai inserir.
  A ideia geral do programa é trabalhar com números e não com as letras em si, porque números são mais
faceis de serem manipulados do que letras
  Primeiro ocorre a declaração das variaveis, as variaveis tamLetras e tamAlfabeto são essenciais para
o programa pois elas calculam o tamanho do alfabeto e da string de letras digitadas pelo usuario, esses
dados são usados como referência nos laços de repetição para determinar a duração deles.
  Depois disso o usuario tem a opção de escolher a quantidade de letras que ele quer inserir..
  Depois o programa faz a leitura na entrada de dados e pegas as letras do usuario, depois 
transforma elas em numeros por meio de um laço de repetição que passa por cada posição da 
string de caracteres do usuario e por cada posição da string alfabeto, se a letra da posição 
determinada pelo laço das letras do usuario for igual a letra da posição determinada 
pelo laço da string alfabeto aquela determinada letra do usuario se torna o numero da posição da letra
do alfabeto + 1, e assim vai indo até todas as letras do usuario se tornarem numeros, enquanto isso 
acontece a string alfabetoNum[26] vai recebendo seus valores baseados no numero de referencia do laço de
repetição + 1.
  Depois disso o programa entra em outro laço de reptição que dentro dele possui outro laço de repetição
esses laços de repetição são responsaveis por deixar a ordem das letras do usuario, que agora estão 
transformadas em numeros, para que fiquem em ordem crescente.
  Depois da string do usuario ficar em ordem crescente o programa entra em outro laço de repetição "duplo"
responsavel por transformar os números em letras novamente, por meio da comparação de cada posição das letras
do usuario com cada posição do alfabeto, se a comparação for igual então a determinada letra do usuario vira
a determinada letra do alfabeto e ai o programa imprime a determinada letra no terminal conforme o loop vai passando.
*/

#include <stdio.h>

int main() {
  int n1, temp;
  printf("Quantos caracteres você quer inserir?: ");
  scanf(" %d", &n1);
  char letras[n1];
  char alfabeto[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  char alfabetoNum[26];
  int tamLetras = sizeof(letras) / sizeof(letras[0]);
  int tamAlfabeto = sizeof(alfabeto) / sizeof(alfabeto[0]);

  printf("Insira %d caracteres:\n", tamLetras);
  for (int i = 0; i < tamLetras; i++){
    printf("Insira o %d° caractere: ", i + 1);
    scanf(" %c", &letras[i]);
    for (int j = 0; j < tamAlfabeto; j++){
      if (letras[j] == alfabeto[j]){
        letras[j] = j + 1;
      }
      alfabetoNum[j] = j + 1;
    }
  }
  for (int i = 0; i < tamLetras; i++){
    for (int j = 0; j < tamLetras - 1; j++){
      if (letras[j] > letras[j + 1]){
        temp = letras[j];
        letras[j] = letras[j + 1];
        letras[j + 1] = temp;
      }
    }
  }
  printf("Letras formatadas:");
  for (int i = 0; i < tamLetras; i++){
    for (int j = 0; j < tamAlfabeto; j++){
      if (letras[j] == alfabetoNum[j]){
        letras[j] = alfabeto[j];
      }
    }
    printf(" %c", letras[i]);
  }
  printf("\n");
  return 0;
}