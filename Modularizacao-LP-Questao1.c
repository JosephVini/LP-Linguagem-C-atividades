#include <stdio.h>

int main(void) {
  int botao1, botao2, soma;

  printf("digite um valor de 0 a 5 para o botão 1: ");
  scanf("%d", &botao1);
  printf("digite um valor de 0 a 5 para o botão 2: ");
  scanf("%d", &botao2);

  if (botao1 > 5 || botao2 > 5){
    printf("Um dos valores ultrapassou o limite permitido");
  }
  else{

    soma = botao1 + botao2;

    if (soma == 0){
      printf("%d - PROXYCITY ",soma);
    }
    else if (soma == 1){
      printf("%d - P.Y.N.G.",soma);
    }
    else if (soma == 2){
      printf("%d - DNSUEY! ",soma);
    }
    else if (soma == 3){
      printf("%d - SERVERS ", soma);
    }
    else if (soma == 4){
      printf("%d - HOST!", soma);
    }
    else if (soma == 5){
      printf("%d - CRIPTONIZE ", soma);
    }
    else if (soma == 6){
      printf("%d - OFFLINE DAY", soma);
    }
    else if (soma == 7){
      printf("%d - SALT ", soma);
    }
    else if (soma == 8){
      printf("%d - ANSWER!", soma);
    }
    else if (soma == 9){
      printf("%d - RAR?", soma);
    }
    else {
      printf("%d - WIFI ANTENNAS ", soma);
    }
  }
  return 0;
}