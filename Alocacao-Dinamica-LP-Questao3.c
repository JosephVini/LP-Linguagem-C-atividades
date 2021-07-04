#include <stdio.h>
#include <stdlib.h>

float *separar(float *vetor, int total, int *notasbaixas){
  
  for (int i = 0; i < total; i++){
    if (vetor[i] < 5){
      *notasbaixas += 1;
    }
  }

  float *vetorNotasBaixas = (float *) malloc(*notasbaixas *sizeof(float));
  int j;

  for (int i=0; i < total;i++){
    if (vetor[i] < 5){
      vetorNotasBaixas[j] = vetor[i];
      j++;
    }
  }

  return vetorNotasBaixas;
}

int main(void) {
  return 0;
}