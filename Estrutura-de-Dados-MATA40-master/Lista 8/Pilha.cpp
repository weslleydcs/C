#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

struct elemento{
	int info;
	struct elemento *prox;
};
typedef struct elemento Elemento;

struct pilha{
	Elemento* prim; 
};

Pilha* pilha_cria(){
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	if(p==NULL){
		exit(1);
	} 
	p->prim = NULL;
	return p;
}

float pilha_push(Pilha* p, float v){
	Elemento* n = (Elemento*) malloc(sizeof(Elemento));
	if(n==NULL){
		exit(1);
	} 
	n->info = v;
	n->prox = p->prim;
	p->prim = n;
	printf("\n\n%f\n\n", p->prim);
}

float pilha_pop(Pilha* p){
	Elemento* t;
	float v;
	if(pilha_vazia(p)){
		exit(1);
	}
	t = p->prim;
	v = t->info;
	printf("\n\n%f\n\n", v);
	p->prim = t->prox;
	free(t);
	return v;
}

float pilha_libera(Pilha* p){
	Elemento *t, *q = p->prim;
	while (q!=NULL){
 		t = q->prox;
 		free(q);
 		q = t;
 	}
 	free(p);
}

int pilha_vazia(Pilha* p){
	if(p->prim == NULL){
		return 1;
	}
	else{
		return 0;
	}	
}
