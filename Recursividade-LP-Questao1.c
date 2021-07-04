#include <stdio.h>

int fibo(int n){

  if (n == 1){
    return 0;
  }
  else if (n == 2){
    return 1;
  }
  return fibo(n-1) + fibo(n-2);

}


int main(void) {
  int n;

  printf("Digite o numero de ordem da sequencia de fibonace:");
  scanf("%d", &n);

  printf("O numero n da sequencia de fibonace é: %d", fibo(n));

  return 0;
}