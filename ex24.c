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

  if (gen == 'm' || gen == 'f'){
    if (def == 's' || def == 'n'){
      if (nacionalidade == 's' || nacionalidade == 'n'){
        printf("Você é ");
        if (gen == 'm'){
          if (def == 'n'){
            if (idade >= 18){
              if (nacionalidade == 's'){
                printf("apto");
              }else {
                printf("inapto");
              }
            }else {
              printf("inapto");
            }
          }else {
            printf("inapto");
          }
        }else {
          printf("inapto");
        }
      printf(" para servir\n");
      }else {
        printf("Input invalido\n");
        return 1;
      }
    }else {
      printf("Input invalido\n");
      return 1;
    }
  }else {
    printf("Input invalido\n");
    return 1;
  }
  return 0;
}
