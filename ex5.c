#include <stdio.h>
#include <math.h> //Por favor, na hora de compilar usar -lm para o gcc reconhecer a biblioteca

int main(){
  printf("Esse programa serve para fazer calculos usando a formula de Bhaskara\n\n");  
  float a, b, c;

  printf("Insira os valores a, b, c respectivamente para fazer o caculo na fórmula de Bhaskara:\n");
  scanf(" %f %f %f", &a, &b, &c);
  printf("\n");

  double delta, op1, op2;  
  delta = (b*b) - (4*a*c);

  if (delta < 0){
    printf("Não existem valores reais para a equação :( \n");
  }
  if (delta == 0){
    printf("Existe somente uma raiz real\n");
    op1= (-b + sqrt(delta)) / (2*a);
    op2= (-b - sqrt(delta)) / (2*a);
    printf("Primeiro resultado: %.3f Segundo resultado: %.3f\n", op1, op2);
  }else {
    op1= (-b + sqrt(delta)) / (2*a);
    op2= (-b - sqrt(delta)) / (2*a);
    printf("Primeiro resultado: %.3f Segundo resultado: %.3f\n", op1, op2);
  }  
  return 0;
}