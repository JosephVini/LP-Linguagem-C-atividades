#include <stdio.h>

int main() {
  int matriz[10][10], i, j, maior, lin, col;

  for (i = 0; i < 10; i++){
    for (j = 0; j < 10; j++){
      scanf("%d", &matriz[i][j]);
    }
  }

  maior = matriz[0][0];

  for (i = 0; i < 10; i++){
    for (j = 0; j < 10; j++){
      if (maior < matriz[i][j]){
        maior = matriz[i][j];
        lin = i;
        col = j;
      }    
    }
  }

  printf("O maior valor é: %d\n", maior);
  printf("Elementos da coluna: ");
  for (i = 0; i < 10; i++){
    printf("%d, ",matriz[i][col]);
  }
  printf("\n");
  printf("Elementos da linha: ");
  for (i = 0; i < 10; i++){
    printf("%d, ",matriz[lin][i]);
  }
}