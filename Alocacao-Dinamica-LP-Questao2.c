#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int vetor[15], i,j,k, *pares, *impares;

  pares = (int*) malloc(10*sizeof(int));
  impares = (int*) malloc(10*sizeof(int));

  for (i=0; i<15; i++){
    printf("Digite o numero da posição %d: \n", i+1);
    scanf("%d", &vetor[i]);
  }
  j = 0, k =0;
  for (i=0; i<15; i++){
    if (vetor[i] % 2 ==0){
      pares[j] = vetor[i];
      j++;
    }else{
      impares[k] = vetor[i];
      k++;
    }
  }

  printf("Numeros pares: ");
  for (i=0; i<j; i++){
    printf("%d, ", pares[i]);
  }

  printf("\nNumeros impares: ");
  for (i=0; i< k; i++){
    printf("%d, ", impares[i]);
  }
}