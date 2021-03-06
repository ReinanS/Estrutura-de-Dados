#include <stdlib.h>
#include <stdio.h>

// COLOQUEI NEGATIVO PARA NÃO DAR CONFLITO COM OUTRA FUNCAO
#define SHOW_LOG 1 //alterar para 0 para ocultar os logs
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

void show_log(char *str);
int inserirNoInicio (Celula* inicio,  Celula* no);
int inserirNoFim (Celula* inicio, Celula* no);
int inserirPorNome (Celula* inicio,  Celula* no);
int inserirPorTamanho (Celula* inicio,  Celula* no);
int inserirPorPeso (Celula* inicio,  Celula* no);
int inserirPorGC (Celula* inicio,  Celula* no);
int ordenarPorNome (Celula* inicio, int tamanho);
int ordenarPorTamanho (Celula* inicio, int tamanho);
int ordenarPorPeso (Celula* inicio, int tamanho);
int ordenarPorGC (Celula* inicio, int tamanho);
int encontraValor(char str[], char linha[], int posicao);
int converteLinha (Celula* no,char* linha);
int extrairDados (Celula* inicio, int* tamanhoArquivo);
int buscarPorNome (Celula* inicio, char* nome, Celula* resultado);
int buscarPorTamanho (Celula* inicio, float tamanho, Celula* resultado);
int buscarPorPeso (Celula* inicio, int peso, Celula* resultado);
int buscarPorGC (Celula* inicio, int gc, Celula* resultado);
int ExcluirPorNome(Celula* inicio, char* nome);
int ExcluirPorTamanho(Celula* inicio, float tamanho);
int ExcluirPorPeso(Celula* inicio, int peso);
int ExcluirPorGC(Celula* inicio, int gc);
void imprimeLista(Celula* inicio);
void destruirLista(Celula* inicio);


// MergeSort
Celula *sortedMergeNome(Celula *a, Celula *b);
void frontBackSplitNome(Celula *source,
                    Celula **frontRef, Celula **backRef);
void mergeSortNome(Celula *inicio); 

Celula *sortedMergeTamanho(Celula *a, Celula *b);
void frontBackSplitTamanho(Celula *source,
                    Celula **frontRef, Celula **backRef);
void mergeSortTamanho(Celula *inicio); 

Celula *sortedMergePeso(Celula *a, Celula *b);
void frontBackSplitPeso(Celula *source,
                    Celula **frontRef, Celula **backRef);
void mergeSortPeso(Celula *inicio); 

Celula *sortedMergeGC(Celula *a, Celula *b);
void frontBackSplitGC(Celula *source,
                    Celula **frontRef, Celula **backRef);
void mergeSortGC(Celula *inicio); 
