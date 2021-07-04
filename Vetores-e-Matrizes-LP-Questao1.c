#include <stdio.h>

int main(void) {
  int total, i, menor_valor, endereço;
  total = 11;
  int valores[total], antecessor, sucessor;
  
  for (i=1; i<total; i++){
    printf("Digite um numero: ");
    scanf("%d", &valores[i]);
  }
  
  menor_valor = valores[1];

  for (i=1; i < total; i++){
    if (menor_valor >= valores[i]){
      menor_valor = valores[i];
      endereço = i;
      antecessor = valores[i - 1];
      sucessor = valores[i + 1];
    }
  }

  printf("Menor valor recebido: %d\n",menor_valor);
  printf("Indice do menor valor: %d\n",endereço);

  if (menor_valor != valores[1]){
    printf("Valor armazenado na posição anterior: %d\n",antecessor);
  }
  if (menor_valor != valores[total-1]){
    printf("Valor armazenado na posição posterior: %d\n",sucessor);
  }
  return 0;
}
