#include <stdio.h>

int main() {
  int r1, r2, req;
  printf("Insira os valores de dois resistores em série: ");
  scanf(" %d %d", &r1, &r2);
  req = r1 + r2;
  printf("Resistência equivalente é: %d\n", req);
}