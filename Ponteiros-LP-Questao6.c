#include <stdio.h>

void troca (int *a, int *b){
  int aux;

  aux = *a;
  *a = *b;
  *b = aux;
}

int main(void) {
  int a = 1, b = 2;

  printf("Antes: A = %d e B = %d\n", a,b);
  troca(&a, &b);
  printf("Antes: A = %d e B = %d", a,b);
}