#include <stdio.h>
#include <string.h>

struct Pessoa{
  char nome[20];
  int idade;
  char endereco[30];
};

int main(void) {
  struct Pessoa Jose;

  printf("Digite a idade da Pessoa: ");
  scanf("%d", &Jose.idade);

  setbuf(stdin, NULL);

  printf("Digite o nome da Pessoa: ");
  fgets(Jose.nome, sizeof(Jose.nome),stdin);

  printf("Digite o endereço da Pessoa: ");
  fgets(Jose.endereco, sizeof(Jose.endereco),stdin);

  printf("%s com idade de %d anos mora na rua %s",Jose.nome, Jose.idade,Jose.endereco);
  
}