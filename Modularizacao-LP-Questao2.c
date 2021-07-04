#include <stdio.h>

int main() {
  int quantidade, primeiro, soma, i, j;

  printf("Digite a quantidade de termos: ");
  scanf("%d", &quantidade);
  printf("Digite o valor do primeiro termo da sequência: ");
  scanf("%d",&primeiro);


  if (quantidade % 2 == 0){
    if (primeiro % 2 == 0){
      soma = primeiro;
    }
    else{
      primeiro += 1;
      soma = primeiro;
    }
    for (i = 0; i < quantidade - 1;i++){
      primeiro += 2;
      soma += primeiro;
    }
  }
  else{
    if (primeiro % 2 == 0){
      primeiro += 1;
      soma = primeiro;
    }
    else{
      soma = primeiro;
    }
    for (i = 0; i < quantidade - 1;i++){
      primeiro += 2;
      soma += primeiro;
    }
  }
  printf("A soma dos Valores é: %d", soma);
}