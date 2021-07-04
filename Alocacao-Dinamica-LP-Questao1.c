#include <stdio.h>

typedef struct {
  float p1, p2, p3;
} Notas;

void calcularmedia(Notas *aluno){
  float media;
  media = (aluno->p1 + aluno->p2 + aluno->p3) / 3;

  if (media >= 7){
    printf("Aprovado com média %.2f", media);
  }else{
    printf("Reprovado com média %.2f", media);
  }
}

int main(void) {
  Notas aluno;
  
  printf("Digite a nota 1 do aluno 1:\n");
  scanf("%f", &aluno.p1);
  printf("Digite a nota 2 do aluno 1:\n");
  scanf("%f", &aluno.p2);
  printf("Digite a nota 2 do aluno 1;\n");
  scanf("%f", &aluno.p3);

  calcularmedia(&aluno);
}