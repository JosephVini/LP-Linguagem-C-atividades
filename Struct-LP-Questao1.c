#include <stdio.h>

int busca( int n, int vetor[], int valorx){
  int encontrado = 0;
  if (n == 0){
    return encontrado;
  }
  else if(vetor[n-1] == valorx){
    encontrado += 1;
    return encontrado;
  }
  else{
    return busca(n-1,vetor, valorx);
  }
}

int main(){
  int i, tam = 0, valorX;
  int vet[30];

  printf("Digite um numero para colocar no vetor ou digite 0 para encerrar a leitura dos numeros:\n");

  for (i=0; i < 30; i++){
      scanf("%d", &vet[i]);
    if (vet[i] == 0){
      break;
    }
    else{
      tam += 1;
    }
  }

  for (i=0; i<tam;i++){
    printf("%d, ", vet[i]);
  }

  printf("\nDigite um numero para ser encontrado: ");
  scanf("%d", &valorX);
  
  printf("O valor da busca é: %d", busca(tam, vet, valorX));
  
}