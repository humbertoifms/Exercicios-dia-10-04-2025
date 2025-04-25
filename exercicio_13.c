/*
  Esse programa volta a sua idade em meses. Primeiramente ocorrem as declarações das variaveis que recebem a data
de nascimento do usuario e depois o dia atual no momento em que o usuario digita os dados, junto com a declaração
das variaveis das operações do mes e de ano.
  Logo após a variavel operacaoMes recebe a subtração do mes atual menos o mes de nascimento do usuario (mes2 - mes1)
e depois acontece a operecaoAno que recebe a subtração do ano atual menos o ano  de nascimento do usuario (ano2 - ano2)
  Depois o programa entra numa condição de if else que verifica se o resultado da operacaoAno é menor que 0, se for
é sinal que a data de nascimento inserida é invalida e o programa para a execução.
  Se estiver tudo certo o programa vai para outra condição que verifica se a opercaoMes é menor que 0, se for é sinal que
a pessoa não fez aniiversário na data atual inserida, então o programa armazena que a operacaoMes é igual a subtração
do total de meses do ano menos o mes de nascimento do usuario e depois soma com o mes atual inserido pelo usuario.
  Depois dessa condição o programa faz o calculo final utilizando a variavel operacaoAno para armazear que o total de
meses de vida é igual a operacaoAno vezes o total de meses do ano, depois o resultado da multiplicação é somado com
o operacaoMes.
  O resultado final é disponibilizado na tela do terminal.
*/

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