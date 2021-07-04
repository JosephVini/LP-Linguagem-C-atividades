#include <stdio.h>

char situacao(float *p1, float *p2, float *p3, int faltas, int aulas, float *media){
  *media = (*p1 + *p2 + *p3) / 3; 
  float porcentagem = (faltas * 100) / aulas;
  porcentagem = porcentagem / 100;
  if (porcentagem <= 0.25){
    if (*media >= 6){
      return 'A';
    }
    else{
      return 'R';
    }
  }
  else{
    return 'F';
  }
}

int main(void) {
  float nota1, nota2, nota3, media;
  int  nAulas, nFaltas;

  printf("Digite a nota 1: \n");
  scanf("%f", &nota1);
  printf("Digite a nota 2: \n");
  scanf("%f", &nota2);
  printf("Digite a nota 3: \n");
  scanf("%f", &nota3);

  printf("Digite o numero total de aulas: \n");
  scanf("%d", &nAulas);
  printf("Difite o numero total de faltas do aluno: \n");
  scanf("%d", &nFaltas);

  char sit = situacao(&nota1, &nota2, &nota3, nFaltas, nAulas, &media);

  switch (sit){
    case 'A': 
      printf("APROVADO com a media: %.1f", media);
      break;
    case 'R': 
      printf("REPROVADO com a media: %.1f", media);
      break;
    case 'F':
      printf("REPROVADO POR NUMERO DE FALTAS");
      break;
  }
}