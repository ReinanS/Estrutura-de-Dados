#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SHOW_LOG 1 
#define TAM 100
#define SUCESSO -1
#define FALHA_ABRIR_ARQUIVO -2
#define FALHA_ALOCACAO -3
#define ARQUIVO_VAZIO -4
#define LISTA_VAZIA -5
#define FALHA_INSERIR -6
#define NAO_ENCONTRADO -7

typedef struct no{
	char nome[TAM];
	float tamanho;
	int peso;
	int gc;
	struct no* prox;
}Celula;


/*  Estrutura de Teste    */


int main() {
   
    return 0;
}