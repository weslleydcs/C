#include <stdio.h>
#include <stdlib.h>

struct elemento{
	int info;
	struct elemento* prox;
};
typedef struct elemento Elemento;

// função criar uma lista inicializando-a como vazia
Elemento* lista_cria(){
 return NULL;
}

//Função para inserir elementos na lista
Elemento* lista_insere(Elemento* lista, int val){

	Elemento* novo = (Elemento*) malloc(sizeof(Elemento));
	novo->info = val;
	novo->prox = lista;
	
	return novo;
}

Elemento* lista_circular(Elemento* r){
    Elemento* head;
    Elemento* inicio;
    Elemento* fim;
    inicio = r;
    for(head = r; head->prox != NULL; head=head->prox){
    	fim=head;
    	fim->prox=inicio;
    	return head; 
	}
}

Elemento* lista_linear(Elemento* r){
    Elemento* head;
    Elemento* inicio;
    Elemento* fim;
    inicio = r;
    for(head = r; head->prox != NULL; head = head->prox){
    	fim=head;
    	fim->prox=NULL;
    	return head;
	}
}

int lista_tamanho_circular(Elemento* r){
    Elemento* atual;
    int n=0;
    for(atual = r; atual != NULL; atual = atual->prox){
    	n++;
    }              
    return n;
}

int main(){
	Elemento* lista;
	lista = lista_cria();
   	lista = lista_insere(lista, 5);
   	lista = lista_insere(lista, 50);
   	lista = lista_insere(lista, 500);
   	
   	printf("O numero de valores presentes na lista sao: ");
   	
	printf("\n%d", lista_tamanho_circular(lista));
    lista = lista_circular(lista);
    lista = lista_linear(lista);
    
    return 0;
}
     
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
