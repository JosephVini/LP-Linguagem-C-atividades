#include <stdio.h>
# define N 3

int matriz_identidade(int mat[][N], int t){
  int i, j, valor;

  valor = 1;

  for (i=0; i<N; i++){
    for (j=0; j<N; j++){
      if (i==j){
        if (mat[i][j] != 1){
          valor = 0;
        }
      }
      else{
        if (mat[i][j] != 0){
          valor = 0;
        }
      }
    }
  }
  return valor;
}

int main(void) {
  int  i, j, tam;

  printf("Digite o numero de linhas da matriz: ");
  scanf("%d", &tam);


  int matriz[tam][N];

  for (i=0; i < N; i++){
    for (j=0; j < N; j++){
      scanf("%d", &matriz[i][j]);
    }
  }

  if (matriz_identidade(matriz, tam) == 1){
    printf("A matriz é uma matriz identidade");
  }
  else{
    printf("A matriz não é identidade");
  }


  return 0;
}