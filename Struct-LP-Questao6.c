#include <stdio.h>
#include <string.h>

typedef struct {
  int matricula;
  char nome[100];
  float nota1, nota2, nota3;
}Aluno;

void ler(Aluno lista[]){
  int i;
  for (i=0; i<2;i++){
    printf("Digite o Nome do aluno %d:\n",i+1);
    setbuf(stdin, NULL);
    fgets(lista[i].nome, sizeof(lista[i].nome),stdin);
    printf("Digite a matricula do aluno %d: \n",i+1);
    scanf("%d", &lista[i].matricula);
    printf("Digite a 1º nota do Aluno %d: \n",i+1);
    scanf("%f", &lista[i].nota1);
    printf("Digite a 2º nota do Aluno %d: \n",i+1);
    scanf("%f", &lista[i].nota2);
    printf("Digite a 3º nota do Aluno %d: \n",i+1);
    scanf("%f", &lista[i].nota3);
  }
}

void maior_nota1(Aluno lista[]){
  float maior = 0;
  int i, aluno;
  for (i=0; i<2;i++){
    if (maior < lista[i].nota1){
      maior = lista[i].nota1;
      aluno = i;
    }
  }
  printf("O(A) aluno %s com matricula %d teve a maior 1º nota: %.2f\n", lista[aluno].nome, lista[aluno].matricula,lista[aluno].nota1);
}

void maior_media(Aluno lista[]){
  float media = (lista[0].nota1 + lista[0].nota2 + lista[0].nota3) / 3;
  int i, aluno;
  for (i=0; i < 2; i++){
    if (media < (lista[i].nota1 + lista[i].nota2 + lista[i].nota3 )/3){
      media = (lista[i].nota1 + lista[i].nota2 + lista[i].nota3 )/3;
      aluno = i;
    }
  }
  printf("O(A) aluno %s com matricula %d teve a maior média geral: %2.f\n",lista[aluno].nome, lista[aluno].matricula, media);
}
void menor_media(Aluno lista[]){
  float menorMedia = (lista[0].nota1 + lista[0].nota2 + lista[0].nota3)/3;
  int i, aluno;
  for (i=0; i < 2; i++){
    if (menorMedia > (lista[i].nota1 + lista[i].nota2 + lista[i].nota3)/3){
      menorMedia = (lista[i].nota1 + lista[i].nota2 + lista[i].nota3 )/3;
      aluno = i;
    }
  }
  printf("O(A) aluno %s com matricula %d teve a menor média geral: %2.f\n",lista[aluno].nome, lista[aluno].matricula, menorMedia);
}
void aprovadoOuNao (Aluno lista[]){
  int i;
  float media;
  for (i = 0; i < 2; i++){
    media = (lista[i].nota1 + lista[i].nota2 + lista[i].nota3)/3;
    if (media >= 6){
      printf("O(A) aluno %s com matricula %d foi Aprovado.\n",lista[i].nome, lista[i].matricula);
    }
    else{
      printf("O(A) aluno %s com matricula %d foi Reprovado.\n",lista[i].nome, lista[i].matricula);
    }
  }
}

int main(void) {
  Aluno lista[5];
  ler(lista);
  maior_nota1(lista);
  menor_media(lista);
  aprovadoOuNao(lista);
  return 0;
}