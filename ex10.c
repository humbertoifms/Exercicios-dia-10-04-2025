#include <stdio.h>

int main() {
  int horaInicio;
  printf("Insira a hora de inicio do jogo: ");
  scanf("%d", &horaInicio);

  int horaFinal;
  printf("Agora insira a hora final do jogo: ");
  scanf("%d", &horaFinal);

  printf("A hora de inicio e de término do jogo é: %dh e %dh\n", horaInicio, horaFinal);
  return 0;
}