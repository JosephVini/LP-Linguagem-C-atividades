#include <stdio.h>

int main(void) {
  int lin, col, numero, i, j, cont_par,cont_impar,cont_meio;
  lin = 10;
  col = 3;
  cont_meio = 0;
  cont_par = 0;
  cont_impar = 0;
  int matriz[lin][col];

  printf("Digite um numero: ");
  scanf("%d", &numero);
  
  while (numero != -1){
    if (numero % 2 == 0){
        matriz[cont_par][2] = numero;
        cont_par = cont_par + 1;
        if (cont_par > 10){
          matriz[cont_meio][1] = matriz[0][2];
          for (i=0; i< 10;i++){
            if (i != 9){
              matriz[i][2] = matriz[i+1][2];
            }
            else{
          matriz[9][2] = numero;
            }
          }
          cont_meio++;
        }
      }
    else if (numero % 2 != 0){
      matriz[cont_impar][0] = numero;
      cont_impar = cont_impar + 1;
        if (cont_impar > 10){
          matriz[cont_meio][1] = matriz[0][0];
          for (i=0; i< 10;i++){
            if (i != 9){
              matriz[i][0] = matriz[i+1][0];
          }
          else{
            matriz[9][0] = numero;
          }
        }
        matriz[9][0] = numero;
        cont_meio++;
      }
    }
    if (cont_meio>10){
      for (i=0; i < 10; i++){
        if(i!=9){
          matriz[i][1] = matriz[i][1];
        }
      }
    }
    printf("Digite um numero: ");
    scanf("%d", &numero);

  }
  for (i=0; i<lin;i++){
    for (j=0; j<col;j++){
      if (cont_par < 10){
          matriz[cont_par][2] = 0;
          cont_par = cont_par + 1;
          }
      if (cont_impar < 10){
          matriz[cont_impar][0] = 0;
          cont_impar = cont_impar + 1;
      }
      if (cont_meio < 10){
        matriz[cont_meio][1] = 0;
        cont_meio++;
      }
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}
