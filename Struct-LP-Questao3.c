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
      inf = meio+1;
      }
    else{
      sup = meio-1;
    }
  }
 return -1;
}

int main(void) {
  int vetor[5] = {5,4,3,2,1}, num = 4;

  int posicao = PesquisaBinaria(vetor, num, 5);

  if (posicao != -1){
    printf("Achamos o numero %d na posicao %d", num, posicao + 1);
  }
}