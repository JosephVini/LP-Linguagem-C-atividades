#include <stdio.h>

int soma(int vet[], int t){
  if (t == 0){
    return 0;
  }
  else{
    return vet[t-1] + soma(vet, t-1);
  }
}

int main(void) {
  int tam, i;
  tam = 10;

  int vetor[tam];

  for (i=0; i < tam; i++){
    scanf("%d", &vetor[i]);
  }

  printf("A soma dos valores deste vetor é: %d", soma(vetor,tam));
}