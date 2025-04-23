#include <stdio.h>

int main () {
  int idAluno;
  printf("Insira seu id: ");
  scanf("%d", &idAluno);
    
  if(idAluno >= 100000){
      printf("Id do aluno invalido\n");
      return 1;
  }

  int n1, n2, n3;
  printf("Insira suas 3 notas: ");
  scanf("%d %d %d", &n1, &n2, &n3);

  int media = n1 + n2 + n3;
  media = media/3;
  printf("Sua média é: %d\n", media);

    return 0;
}