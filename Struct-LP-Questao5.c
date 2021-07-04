#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[100];
  int matricula;
  char curso[100];
}Aluno;

void ler(Aluno lista[]){
  int i;
  for (i=0; i<5;i++){
    printf("Digite o Nome do aluno %d:\n",i+1);
    setbuf(stdin, NULL);
    fgets(lista[i].nome, sizeof(lista[i].nome),stdin);
    printf("Digite a matricula do aluno %d: \n",i+1);
    scanf("%d", &lista[i].matricula);
    printf("Digite o Curso do Aluno %d: \n",i+1);
    setbuf(stdin, NULL);
    fgets(lista[i].curso, sizeof(lista[i].curso),stdin);
  }

  for (i=0;i<5;i++){
    printf("Aluno %d: %s Matricula: %d, Curso: %s\n", i+1, lista[i].nome,lista[i].matricula, lista[i].curso);
  }
}


int main(void) {
  Aluno lista[5];

  ler(lista);
  return 0;
}