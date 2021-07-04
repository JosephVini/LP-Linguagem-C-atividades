#include <stdio.h>

int main(void) {
  int jogador1, jogador2, i,opcao;
  
  printf("Jogador 1 digite um numero entre 0 e 100: ");
  scanf("%d",&jogador1);

  while (jogador1 < 1 || jogador1 > 99){
    printf("Numero invalido digite a senha novamente: ");
    scanf("%d",&jogador1);
  }

  for (i=1; i <= 5; i++){
    printf("Jogador 2 digite um numero entre 0 e 100: ");
    scanf("%d",&jogador2);

    if (jogador2 == jogador1){
      printf("Jogador 2 acertou a senha que é %d\n",jogador1);
      i = 5;
    }
    else if (jogador2 - jogador1 == 1 || jogador2 - jogador1 == -1 ){
      printf("TÁ QUENTE!!!\n");
    }
    else if (jogador2 > jogador1){
      printf("O valor %d é maior que o escolhido pelo jogador 1\n",jogador2);
    }
    else if (jogador2 < jogador1){
      printf("O valor %d é menor do que o escolhido pelo jogador 1\n",jogador2);
    }
    if (i == 5){
      if (jogador1 != jogador2){
        printf("Você perdeu. Tente novamente depois.\n");
      }
      printf("Se deseja continuar digite 1, se não digite 2: ");
      scanf("%d",&opcao);
      if (opcao == 1){
        i = 1;
        printf("jogador 1 digite uma numero de 0 a 100: ");
        scanf("%d",&jogador1);
      }
      else if (opcao == 2){
        printf("Até mais.");
        break;
      }
    }
  }
  return 0;
}