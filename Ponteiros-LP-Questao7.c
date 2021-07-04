#include <stdio.h>

int dividir(int *valor){
  return *valor / 5;
}

int main(void) {
  int *px;
  int valorx = 5;

  px = &valorx;

  printf("Endereço = %p\n", &valorx); // endereço de memoria  
  printf("Endereço = %p\n", px); // endereço de memoria 

  printf("O valor é %d", dividir(px)); // valor é 1
}