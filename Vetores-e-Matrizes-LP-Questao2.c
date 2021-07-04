#include <stdio.h>

int main(void){
  int total;
  total = 10;
  int vetor[total], i, numero, maior, menor, j;

  for (i=0; i < total; i++){
    printf("Digite um numero: ");
    scanf("%d", &vetor[i]);
  }

  for (i=0; i < total; i++){
    for (j=i+1; j < total; j++){
      if (vetor[i] > vetor[j]){
        maior = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = maior;
      }
    }
  }

  for (i=0; i < total; i++){
    printf("%d, ",vetor[i]);
  }
}