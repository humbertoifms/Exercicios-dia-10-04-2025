/*
  Esse programa serve para fazer calculos utiizando a fórmula de bhaskara. Primeiro eu adicionei
a biblioteca math.h para fazer o cálculo da raiz quadrada de um número.
  Depois foram declaradas 3 variaveis a, b, c, cada uma representando as variaveis padrões utilizadas
na formula de bhaskara.
  O programa escaneia os 3 valores usando scanf; depois eu crio um double que serve para guardadr valores
maiores para que os calculos da formula fossem possiveis.
  Depois delta é calculado dentro da variavel (delta) b ao quadrado menos 4 vezes a vezes c.
  Depois o programa entra numa conição if else que verifica se o valor do delta deu negativo, igual a 0
ou positivo, se deu negativo quer dizer que não existem valores reais para a equação; se deu igual a zero
so existe uma raiz ou um resultado possivel; se não entrou em nenhum dos casos então delta resultou em um
número positivo sendo assim resultam e duas possiveis raizes.
  Depois da verificação o programa executa o resto da operação de bhaskara e mostra os resultados na tela
do terminal por meio do printf.
*/

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