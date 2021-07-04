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
  int total, i, notasbaixas = 0;
  printf("Digite a quantidade total de notas da turma: \n");
  scanf("%d", &total);

  float *vetor = (float *) malloc(total *sizeof(float));

  float *vetNotasBaixas = (float *) malloc(notasbaixas *sizeof(float));

  for (i=0; i< total; i++){
    printf("Digite a nota do aluno %d: \n", i+1);
    scanf("%f", &vetor[i]);
    }

  vetNotasBaixas = separar(vetor, total, &notasbaixas);

  for (i = 0; i < notasbaixas; i++){
    printf("nota do aluno %d: %.2f\n", i+1, vetNotasBaixas[i]);
  }
}