#include <stdio.h>

int main () {
    printf("Insira dois números, a divisão dara um resultado obrigatóriamente inteiro\n");
    float n1, n2, divisao;
    printf("Primeiro numero: ");
    scanf(" %f", &n1);
    printf("Segundo numero: ");
    scanf(" %f", &n2);
    divisao = n1/n2;
    printf("O resultado sem formatação é: %f\n", divisao);
    printf("O resultado com formatação inteira é: %d\n", (int)divisao); 
}