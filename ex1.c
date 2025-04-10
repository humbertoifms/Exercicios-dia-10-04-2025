#include <stdio.h>

int main() 
{
  printf("Bem vindo ao programa que verifica se seu triangulo é:\nEquilátero, Isóceles ou Escaleno\n\n");

  int lado1, lado2, lado3;

  printf("Coloque as medidas inteiras do seu triangulo: ");
  scanf("%d %d %d", &lado1, &lado2, &lado3);
   
  int somaLados= lado1 + lado2 + lado3;

  if (somaLados == true)
  {
    printf("Seu triangulo é ");
    if (somaLados/3 == lado1)
    {
      printf("equilátero\n");
    } 
    if (lado1 == lado2)
    {
      printf("isóceles\n");
    } 
    if (lado1 == lado3)
    {
      printf("isóceles\n");
    } 
    if (lado2 == lado3)
    {
      printf("isóceles\n");
    } 
    else 
    {
      printf("escaleno\n");
    }
  }    
  return 0;
}