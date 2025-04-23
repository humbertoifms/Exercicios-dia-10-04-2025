#include <stdio.h>

int main() {
    int alturaEstudante;
    char genero;
    printf("Insira sua altura: ");
    scanf("%d", alturaEstudante);

    printf("Insira seu gênero com uma letra F ou M: ");
    scanf("%c", genero);

    printf("Sua altura é: %d. Seu gênero é: %d.", alturaEstudante, genero);
    return 0;
}