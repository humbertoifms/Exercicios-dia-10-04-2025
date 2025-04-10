#include <stdio.h>

int main() {
  printf("------Cardapio do IFMS------\n1- Cheetos ------ 4- Queijo\n2- Lasanha ------ 5- Pizza\n3- Mortadela ---- 6-Strogonoff\n\n");
  int pedido;
  printf("Selecione o numero seu pedido: ");
  scanf(" %d", &pedido);
  printf("\n");
  if (pedido > 6){
    printf("pedido invalido, tente novamente\n");
    return 1;
  }else if (pedido < 1){
    printf("pedido invalido, tente novamente\n");
    return 1;
  }else {
    printf("Ok! Preparando: ");
    if (pedido < 4){
      if (pedido == 1){
        printf("Cheetos");
      }else if (pedido == 2){
        printf("Lasanha");
      }else {
        printf("Mortadela");
      }
    } 
    if (pedido > 3){
      if (pedido == 4){
        printf("Queijo");
      }else if (pedido == 5){
        printf("Pizza");
      }else {
        printf("Strogonff");
      }
    }
    printf("\n");
  }
  
  return 0;
}