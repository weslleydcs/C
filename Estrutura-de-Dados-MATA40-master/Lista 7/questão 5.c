#include <stdio.h>
#include <stdlib.h>

struct elemento{
	int info;
    struct elemento *ant;
	struct elemento* prox;
};
typedef struct elemento Elemento;


// fun��o criar uma lista inicializando-a como vazia
Elemento* lista_cria(){
 return NULL;
}

//Fun��o para inserir elementos na lista devolvendo no final uma lista atualizada
Elemento* lista_insere(Elemento* lista, int val){

	Elemento* novo = (Elemento*) malloc(sizeof(Elemento));
	novo->info = val;
	novo->prox = lista;
	
	return novo;
}

//Fun��o para buscar um elemento na lista duplamente encadeada
Elemento* busca_elemento(Elemento* lista, int v){
	Elemento* p;
	for(p = lista; p != NULL; p = p->prox){
		if(p->info == v){
			return p;
		}		
	}
	return NULL; // n�o achou o elemento 
}

//Fun��o para retirar um elemento da lista
Elemento* lista_retira(Elemento* lista, int val){
	Elemento* a = NULL; // ponteiro para o elemento anterior 
	Elemento* p = lista; // ponteiro para percorrer a lista 
	
	// procura elemento na lista, guardando anterior 
	while(p != NULL && p->info != val){
 		a = p;
 		p = p->prox;
 	}
 	if(p == NULL){ /// verifica se achou o elemento
 		return lista; // se n�o achar: retorna a lista original
	}
 	if(a == NULL){ // retira o elemento da lista
 		lista = p->prox; // retira o elemento do inicio da lista
	}
	else{ 
 		a->prox = p->prox; // retira elemento do meio da lista 
	}

	free(p);
	return lista;
}


int main(){
	Elemento* lista;
	
	lista = lista_cria();
	lista_insere(lista, 5);
	lista_insere(lista, 100);
    busca_elemento(lista, 100);
    lista_retira(lista, 100);
    printf("Fim");

	return 0;
}

