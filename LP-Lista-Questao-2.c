#include <stdio.h>

int main(void) {
  float p1, p2, p3,maior, media;

  printf("Digite a nota da prova 1: ");
  scanf("%f",&p1);
  printf("Digite a nota da prova 2: ");
  scanf("%f",&p2);

  media = (p1 + p2) / 2;

  if (media >= 5 && p1 >=3 && p2 >= 3){
    printf("Aprovado");
  }
  else{
    printf("Digite a nota da prova 3: ");
    scanf("%f", &p3);
    if (p1 >= p2){
      media = (p1 + p3) / 2;
    }
    else{
      media = (p2 + p3) / 2;
    }
    if (media >= 5){
      printf("Média final %.2f, Aprovado",media);
    }
    else{
      printf("Média final %.2f, Reprovado",media);
    }
  }
  return 0;
}