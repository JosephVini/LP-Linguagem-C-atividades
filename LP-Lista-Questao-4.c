#include <stdio.h>

int main(void) {
  int jogador1, jogador2, i;

  printf("Jogador 1 digite um numero entre 0 e 100: ");
  scanf("%d",&jogador1);

  while (jogador1 < 1 || jogador1 > 99){
    printf("Numero invalido digite a senha novamente: ");
    scanf("%d",&jogador1);
  }

  for (i=0; i <= 5; i++){
    printf("Jogador 2 digite um numero entre 0 e 100: ");
    scanf("%d",&jogador2);

    if (jogador2 == jogador1){
      printf("Jogador 2 acertou a senha que é %d",jogador1);
      break;
    }
    else if (jogador2 > jogador1){
      printf("O valor %d é maior que o escolhido pelo jogador 1\n",jogador2);
    }
    else if (jogador2 < jogador1){
      printf("O valor %d é menor do que o escolhido pelo jogador 1\n",jogador2);
    }
    else{
      printf("Jogador 2 perdeu. a senha é %d",jogador1);
    }
  }
  return 0;
}