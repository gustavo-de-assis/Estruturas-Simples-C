/*
*  Rio de Janeiro, 17 de dezembro de 2018
*  Gustavo de Assis Siqueira
*
*  Programa que simula uma pilha dinâmica em C
*
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct _elemento
{
	int valor;
	struct elemento* anterior;
} elemento;

typedef struct _pilha
{
	int tam;
	elemento* topo;
} pilha;

void inicia_pilha(pilha* p);
void empilha(int x, pilha* p);
void desempilha(pilha* p);


int main(int argc, char const *argv[])
{
/*
	// Exemplo de uso da pilha
	
	pilha *p = malloc(sizeof(pilha));
	inicia_pilha(p);
	empilha(32, p);
	empilha(37, p);
	empilha(41, p);
	empilha(113, p);

	desempilha(p);

*/
	return 0;
}


void inicia_pilha(pilha* p){
	p->tam = 0;
	p->topo = malloc(sizeof(elemento));
}

void empilha(int x, pilha* p){
	elemento *novo = malloc(sizeof(elemento));
	novo->valor = x;
	novo->anterior = p->topo;
	p->topo = novo;
	p->tam++;
	printf("Novo topo = %d, tamanho da pilha = %d\n", p->topo->valor, p->tam);
}

void desempilha(pilha* p){
    if(p->tam > 0){
		elemento *antigo = p->topo;
		p->topo = p->topo->anterior;
		free(antigo);
		p->tam--;
		printf("Topo = %d, tamanho da pilha = %d\n",p->topo->valor, p->tam);
	}
	else{
		printf("Pilha vazia\n");
	}
}