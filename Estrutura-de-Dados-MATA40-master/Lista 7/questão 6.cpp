#include <stdio.h>
#include <stdlib.h>

struct elemento{
	int info;
	struct elemento* prox;
	struct elemento* ant;
};
typedef struct elemento Elemento;

Elemento* lista_cria(){
	return NULL;
}

Elemento* lista_insere(Elemento* r, int x){
    Elemento* novo;
    Elemento* head = r;
    Elemento* inicio = r;
    Elemento* fim;
    
	if(r == NULL){
    	novo = (Elemento*)malloc(sizeof(Elemento));                
    	novo->ant = NULL;
    	novo->info = x;
    	inicio = novo;
    	fim = inicio;
    	novo->prox = r;
    	r = novo;
    	return novo;
    }
    else{
    	novo->info = x;
     	novo->ant = head;
     	novo->prox = r;
     	r = novo;
     	fim = novo;
     	head = r; 
     	fim->prox = inicio;
     	inicio->ant = fim;
     	return novo;   
    }
}          


Elemento* lista_remove(Elemento* r){
	r = r->prox;
	free(r->ant);
	r->ant = NULL;
	return r;              
}

int main(){
    Elemento* lista;
    
	lista = lista_cria();
    
	lista = lista_insere(lista, 10);
    
	lista = lista_insere(lista, 20);
    
	lista = lista_insere(lista, 30);
    
	lista = lista_insere(lista, 40);
    
	lista = lista_insere(lista, 50);
    
	lista = lista_insere(lista, 60);
    
	lista = lista_remove(lista);
	
	printf("Fim");
	printf("\n\n");
	
    
    return 0;
    
} 
