#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char nome[40];
  char telefone[15];
  char celular[15];
  char email[40];

  struct Contatos *proximo;
} Contatos;


Contatos * criaragenda(){
  return NULL;
}

Contatos * inserircontato(Contatos *contato){

  Contatos *novo;
  novo = (Contatos *) malloc(sizeof(Contatos));
  printf("Digite o nome do contato: ");
  scanf("%s", novo -> nome);
  setbuf(stdin, NULL);
  printf("Digite o numero de telefone: ");
  scanf("%s", novo -> telefone);
  setbuf(stdin, NULL);
  printf("Digite o numero do celular: ");
  scanf("%s", novo -> celular);
  setbuf(stdin, NULL);
  printf("Digite o e-mail: ");
  scanf("%s", novo -> email);
  setbuf(stdin, NULL);

	if(contato == NULL){
	novo ->proximo = NULL;
	return novo;
	}
	else{
		Contatos * p = contato;
		for (p=contato; p !=NULL; p++){
			if(strcmp(novo->nome, p->nome) < 0){
				novo ->proximo = (struct Contatos *) contato;
				return novo;
			}
			else if(strcmp(novo->nome, p->nome) > 0){
				Contatos * pont = contato;
				while(pont->proximo!=NULL){
					pont = (Contatos *) pont->proximo;
				}
				novo->proximo =NULL;
				pont->proximo = (struct Contatos *) novo;
				return contato;
			}
			else{
				novo -> proximo = p->proximo;
				p->proximo =(struct Contatos *) novo;
				return p;
			}
		}	
	}
}

void listaconatatos (Contatos *c){ 
  Contatos *p = c;
  while (p!=NULL){
    printf("Nome: %s\n", p ->nome);
    printf("Celular: %s \n", p->celular);
    printf("Telefone: %s\n", p->telefone);
    printf("Email: %s\n", p->email);
    printf("\n");
    p=(Contatos *)p-> proximo;
  }
}

Contatos * buscacontato(Contatos *c, char *nome){
  Contatos *busca = c;

  while (busca != NULL){
    if (strcmp(busca->nome, nome) == 0){
      return busca; 
    }
  }
  return NULL;

}

int main(void){

  Contatos *agenda;

  agenda = criaragenda();

  int opcao;
  printf("1 – Inserir Contato\n");
  printf("2 – Listar Contatos\n");
  printf("3 – Buscar Contato\n");
  printf("4 – Sair\n");

  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

  while (opcao != 4){
    if (opcao < 1 || opcao > 4){
      printf("Opção invalida, Digite outra Opção: ");
      scanf("%d", &opcao);
    }
    if (opcao == 1){ 
      agenda = inserircontato(agenda);
      printf("Adicionado novo contato\n");
      printf("Escolha outra opção: ");
      scanf("%d", &opcao);
    }
    else if( opcao == 2){
      listaconatatos(agenda);
      printf("Escolha outra opção: ");
      scanf("%d", &opcao);
    }
    else if( opcao == 3){
      Contatos * endereço;
      char nomedocontato[20];
      printf("Digite o nome do contato que procura: ");
      scanf("%s", nomedocontato);
      endereço = buscacontato(agenda, nomedocontato);
      if (endereço == NULL){
        printf("Contato não encontrado\n");
      }
      else{
        printf("Contato encontrado: %p\n", endereço);
      }
      printf("Escolha outra opção: ");
      scanf("%d", &opcao);
    }
    else if( opcao == 4){
      printf("Ate mais");
      break;
    }
  }
}
