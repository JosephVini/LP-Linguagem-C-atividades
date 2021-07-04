#include <stdio.h>

int funcaoMaior(){
  int num1, num2, num3, maior;

  printf("Digite um numero: ");
  scanf("%d", &num1);
  printf("Digite outro numero: ");
  scanf("%d", &num2);
  printf("Digite outro numero: ");
  scanf("%d", &num3);

  if (num1 > num2 && num1 > num3){
    maior = num1;
  }
  else if (num2 > num1 && num2 > num3){
    maior = num2;
  }
  else{
    maior = num3;
  }
 return maior;
}

int main(void) {
  int maior;

  maior = funcaoMaior();
  
  printf("O maior numero dos três digitados é: %d", maior);
}