#include <stdio.h>

int main(){
  int anoN;
  printf("insira seu ano de nascimento: ");
  scanf("%d", &anoN);  
  int anoHj;
  printf("insira o ano atual: ");
  scanf("%d", &anoHj);     
  long long somaDia = 0;
  
  while(anoN <= anoHj){
      if (anoN % 4 == 0){
          somaDia = somaDia + 366;
      } else{
          somaDia = somaDia + 365;
      }
      anoN++;
  }    
  printf("Sua idade em dias é: %d\n", somaDia);
  return 0;
}  