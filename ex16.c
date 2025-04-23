#include <stdio.h>

int main(){
  int anoN, anoHj;
  printf("insira seu ano de nascimento: ");
  scanf("%d", &anoN);  
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
  printf("Os números primos da sua idade em dias são: \n");
  for (int i = 1; i <= somaDia; i++) {
    if(somaDia % 2 == 0){
      printf("%d ", somaDia);
    }
  }
  printf("\n");
  return 0;
}  