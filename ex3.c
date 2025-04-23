#include <stdio.h>

int main(){
  int diaN, mesN, anoN;
  printf("Insira sua data de nascimento: ");
  scanf("%d %d %d", &diaN, &mesN, &anoN);
  
  int diaHj, mesHj, anoHj;
  printf("Insira a data atual: ");
  scanf("%d %d %d", &diaHj, &mesHj, &anoHj);
  
  int calculoMes = mesN - mesHj;
  int anoTotal, mesTotal, diaTotal;
  
  if (calculoMes >= 0) {
    anoHj = anoHj -1;
    anoTotal = anoHj - anoN;
    mesTotal = 12 - mesN;
    mesTotal = mesTotal + mesHj;
    diaTotal= diaHj - diaN;
  } else {
    anoTotal = anoHj - anoN;
    mesTotal = mesHj - mesN;
    diaTotal= diaHj - diaN;
  }
  
  printf("Você tem %d anos e %d meses e %d dias de vida\n", anoTotal, mesTotal, diaTotal);
  return 0;
}   