#include <stdio.h>

void imprime_primeiro(int *vet){
  printf("Valor: %d\n", vet[0]);
}

int* metade_final(int *vet, int n){
  return &vet[(int) (n/2)];
}

int main(void) {
/*
//Questão 1
  int x, y, *p;
  y = 0;
  p = &y;
  x = *p;
  x = 4;
  (*p) ++;
  x--;
  (*p) += x;

  printf("%d \n", x); // x = 3
  printf("%d \n", y); // y = 4
  printf("%d", *p); // y = 4
*/
/*
  //Questão 2:
  int vet[5] = {1,2,3,4,5};
  imprime_primeiro(vet); // valor: 1
  return 0;
*/

 /*
  //Questão 3 
  int vet[5] = {1,2,3,4,5};
  imprime_primeiro(&vet[2]); // valor: 3
  return 0;
*/

/*
  //Questão 4
  int vet[6] = {1,2,3,4,5,6};
  int *v = metade_final(vet, 6);
  printf("Valor: %d\n", v[0]); // Valor: 4
  return 0;
*/


  //Questão 5 
  int vet[6] = {1,2,3,4,5,6};
  printf("Valor1: %p\n", vet); // valor1: 0x7ffcc00029a0
  printf("Valor2: %d\n", *vet); // valor2: 1
  printf("Valor3: %d\n", *(vet+2)); // valor3: 3
  return 0;
}



