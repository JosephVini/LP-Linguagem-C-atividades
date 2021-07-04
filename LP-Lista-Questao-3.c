#include <stdio.h>

int main(void) {
  int valor1, valor2, valor3, maior, menor, meio;
  printf("Digite valor 1: ");
  scanf("%d",&valor1);
  printf("Digite valor 2: ");
  scanf("%d",&valor2);
  printf("Digite valor 3: ");
  scanf("%d",&valor3);

  if (valor1 > valor2 && valor1 > valor3){
    maior = valor1;
    if (valor2 > valor3){
      meio = valor2;
      menor = valor3;
    }
    else{
      meio = valor3;
      menor = valor2;
    }
  }
  else if (valor2 > valor1 && valor2 > valor3){
    maior = valor2;
    if (valor1 > valor3){
      meio = valor1;
      menor = valor3;
    }
    else{
      meio = valor3;
      menor = valor1;
    }
  }
  else if (valor3 > valor1 && valor3 > valor2){
    maior = valor3;
    if (valor1 > valor2){
      meio = valor1;
      menor = valor2;
    }
    else{
      meio = valor2;
      menor = valor1;
    }
  }
  printf("valores em ordem crescente: %d, %d, %d",menor, meio, maior);
  return 0;
}