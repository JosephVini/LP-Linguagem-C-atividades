#include <stdio.h>

int main(void) {
  int  matriz[5][5], i, j;
  
  
  for (i =0; i < 5; i++){
    for (j = 0; j < 5; j++){
      scanf("%d", &matriz[i][j]);
    }
  }

  for (i =0; i < 5; i++){
    for (j = 0; j < 5; j++){
      printf("%d ",matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  
  for (i =0; i < 5; i++){
    for (j = 0; j < 5; j++){
      printf("%d ",matriz[j][i]);
    }
    printf("\n");
  }
  
}