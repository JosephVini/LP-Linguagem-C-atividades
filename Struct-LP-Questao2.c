#include <stdio.h>

int PesquisaBinaria (int vet[], int valorX, int tam)
{
  int inf = 0;
  int sup = tam-1; 
  int meio;
     
  while (inf <= sup)
  {
    meio = (inf + sup)/2;

    if (valorX == vet[meio]){
      return meio;
      }
    else if (valorX < vet[meio]){
      sup = meio-1;
      }
    else{
      inf = meio+1;
    }
  }
 return -1;
}

int main(void) {
  int vetor1[18] = {10, 16, 27, 31, 33, 37, 41, 49, 53, 57, 68, 69, 72, 77,84, 89, 95, 99};
  int vetor2[5] = {33, 50, 77, 90, 99};

  for (int i = 0; i < 5; i++){
    int posicao = PesquisaBinaria(vetor1, vetor2[i], 18);

    if (posicao != -1){
      printf("O numero %d se encontra no vetor na posição %d.\n", vetor2[i], posicao + 1);
    }
    else{
      printf("O numero %d não se encontra no vetor.\n", vetor2[i]);
    }
  }
}