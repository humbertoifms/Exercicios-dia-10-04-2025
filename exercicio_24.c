/*
  Esse programa verifica se voce esta apto para o serviço obrigatório do exército baseado em infomações
pré-dispostas, primeiro são declaradas as variaveis que vão receber valores digitados pelo usuario,
  Depois ocorre a entrada de daods feita pelo usuario, depois o programa entra eum uma condição de tratamento
de erros onde se os inputs do usuario forem diferentes das possiveis alternativas o programa para de ser executado
e uma mensagem de erro aparece
  Se não houveram erros então o programa entra em outra condição de if else que verifica se os inputs feitos pelo
usuario são compativeis com os atributos necessários para aptidão ao serviço militar
*/

#include <stdio.h>

int main (){
  int idade;
  char gen, def, nacionalidade;

  printf("Insira sua idade:\n");
  scanf(" %d", &idade);
  printf("Insira seu sexo com as letras (m/f):\n");
  scanf(" %c", &gen);
  printf("Você é natural do Brasil? (s/n):\n");
  scanf(" %c", &nacionalidade);
  printf("Possui deficiência? (s/n)\n");
  scanf(" %c", &def);
  if ((gen == 'm')||(gen == 'f')||(def == 's')||(def == 'n')||(nacionalidade == 's')||(nacionalidade == 'n')){
    printf("Você é ");
    if ((gen == 'm') && (def == 'n') && (nacionalidade == 's')){
      printf("apto");
    }else {
      printf("inapto");
    }
    printf(" para servir\n");
  }else {
    printf("Input invalido, erro fatal...\n\nTente novamente\n");
    return 1;
  }
  
  return 0;
}
