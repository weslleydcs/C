#include <stdio.h>
#include <stdlib.h>

struct elemento{
	int info;
	struct elemento* prox;
};
typedef struct elemento Elemento;

// fun��o criar uma lista inicializando-a como vazia
Elemento* lista_cria(){
 return NULL;
}

//Fun��o para inserir elementos na lista
Elemento* lista_insere(Elemento* lista, int val){

	Elemento* novo = (Elemento*) malloc(sizeof(Elemento));
	novo->info = val;
	novo->prox = lista;
	
	return novo;
}

//Fun��o para imprimir os valores da lista percorrendo a mesma
void lista_imprime(Elemento* lista){
	Elemento* p;
	for(p = lista; p != NULL; p = p->prox){
		printf("info = %d\n", p->info);
	}
}

//Fun��o para verificar se a lista est� ou n�o vazia
int lista_vazia(Elemento* lista){
	return (lista == NULL);
}

//Fun��o para buscar um elemento na lista
Elemento* busca_elemento(Elemento* lista, int v){
	Elemento* p;
	for(p = lista; p != NULL; p = p->prox){
		if(p->info == v){
			return p;
		}		
	}
	return NULL; // n�o achou o elemento ent�o returna NULL
}

//Fun��o para retirar um elemento da lista
Elemento* lista_retira(Elemento* lista, int val){
	Elemento* a = NULL; // ponteiro para o elemento anterior 
	Elemento* p = lista; // ponteiro para percorrer a lista 
	
	/* procura elemento na lista, guardando anterior */
	while(p != NULL && p->info != val){
 		a = p;
 		p = p->prox;
 	}
 	if(p == NULL){ // verifica se achou o elemento
 		return lista; // se n�o achar: retorna a lista original 
	}
 	if(a == NULL){ // retira o elemento da lista
 		lista = p->prox; // retira o elemento do inicio da lista
	}
	else{ 
 		a->prox = p->prox; // retira o elemento do meio da lista 
	}

	free(p);
	return lista;
}

//Fun��o para liberar a lista
void lista_libera(Elemento* lista){
	Elemento* p = lista;
	while(p != NULL){
		Elemento* t = p->prox; // guarda refer�ncia p/ pr�x. elemento 
		free(p); // libera a mem�ria apontada por p 
		p = t; // faz p apontar para o pr�ximo 
	}
}
