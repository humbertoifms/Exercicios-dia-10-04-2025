/*
  Esse programa apresenta um cardapio com opções numeradas de 1 a 6, logo em seguida o usuário escolhe uma
das opções e o programa imprime a opção escolhida na tela do terminal..
  Primeiramente o programa imprime na tela do terminal o cardapio em si, depois o programa entra em um laço
de repetição para o tratamento de erros para não ser necessario parar a execução do programa caso aconteça um
erro. Logo após entrar no laço de repetição o programa pede para inserir o seu pedido, depois o pedido entra 
numa condição if else que verifica se o pedido é um caractér, se for o programa para a execução para evitar um
loop infinito, se o pedido não for um caratér ele entra em outra condição que verifica se o pedido estra entre
1 ao numero 6, se não estiver dentro desse intervalo o programa volta o loop para o inicio e então o usuario 
deve digitar seu pedido novamente.
  Depois se tudo deu certo o programa entra num switch case para verificar qual foi o pedido feito pelo usuario
para imprimir ele na tela do terminal.
*/

#include <stdio.h>

int main() {
  printf("------Cardapio do IFMS------\n1- Cheetos ------ 4- Queijo\n2- Lasanha ------ 5- Pizza\n3- Mortadela ---- 6-Strogonoff\n\n");
  int pedido;
  for(int i = 0; i < 1; i++){
    printf("Selecione o numero seu pedido: ");
    scanf(" %d", &pedido);
    if ((pedido >= 'A' && pedido <= 'Z') || (pedido >= 'a' || pedido <= 'z')){
      printf("Pedido invalido, erro fatal...\nTente novamente\n");
      return 1;
    }else if (pedido > 6 || pedido < 1){
      printf("pedido invalido, tente novamente\n");
      i = i - 1;
    }else {
      printf("\nOk! Preparando: ");
      switch (pedido){
        case 1:
          printf("Cheetos");
          break;
        case 2:
          printf("Lasanha");
          break;
        case 3:
          printf("Mortadela");
          break;
        case 4:
          printf("Queijo");
          break;
        case 5:
          printf("Pizza");
          break;
        case 6:
          printf("Strogonoff");
          break;
      }
      printf("\n");
    }
  }
  return 0;
}