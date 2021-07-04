#include <stdio.h>

int main(void) {
  int valor1, valor2;
  char op;

  printf("Digite o valor1: ");
  scanf("%d",&valor1);
  printf("Digite o valor2: ");
  scanf("%d",&valor2);

  printf("Digite o operador: ");
  setbuf(stdin, NULL);
  scanf("%c",&op);

  switch(op){
    case '+': printf("Soma é igual á %d",valor1 + valor2);
    break;
    case '-': printf("Subtração é igual á %d", valor1 - valor2);
    break;
    case '*': printf("Multiplicação é igual á %d", valor1 * valor2);
    break;
    case '/': printf("Divisão é igual á %d", valor1 / valor2);
    break;
    default: printf("Caractere invalido");  
  }
  return 0;
}