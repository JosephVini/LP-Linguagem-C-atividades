#include <stdio.h>

int main(void) {
int a = 25;
int *pa = &a;
int b = *pa + a;

printf("valor de a: %d\n", a); // valor inteiro de a
printf("Valor de pa: %p\n", pa); // pa guarda o endereço de a
printf("Valor de &a: %p\n", &a); // motra o endereço de a
printf("Valor de *pa: %d\n", *pa); // mostra o valor apontado por pa
printf("Valor de b: %d\n", b); // mostra a soma dos valores de a e o apontado em pa
printf("Valor de &b: %p", &b); //mostra o endereço de b 
}