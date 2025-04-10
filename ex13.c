#include <stdio.h>

int main() {
  printf("Esse programa te volta sua idade em meses\n\n");
  int dia1, mes1, ano1, dia2, mes2, ano2, operacaoMes, operacaoAno;
  printf("Insira sua data de nascimento: ");
  scanf(" %d %d %d", &dia1, &mes1, &ano1);
  printf("Insira a data de hoje: ");
  scanf(" %d %d %d", &dia2, &mes2, &ano2);
  operacaoMes = mes2 - mes1;
  operacaoAno = ano2 - ano1;
  if (operacaoAno < 0){
    printf("Data de nascimento invalida\n");
    return 1;
  }
  if (operacaoMes < 0){
    operacaoMes = (12 - mes1) + mes2;
  }
  operacaoAno = (operacaoAno * 12) + operacaoMes;
  printf("Essa é sua idade aproximada em meses: %d\n", operacaoAno);
  return 0;
}