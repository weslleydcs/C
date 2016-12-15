#include <stdio.h>
#include <stdlib.h>

struct no{
	float topo;
	struct no* prox;
};

typedef struct no No;

struct pilha{
	No* prim;
};

Pilha* cria(void){
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	p->prim = NULL;
	return p;
}

//Funçao auxiliar para inserir no inicio do tipo No
No* ins_ini(No* l, float v){
	No* p = (No*) malloc(sizeof(No));
	p->topo = v; //p->topo aponta para o topo passado como parametro na funcao
	p->prox = l; // p->prox recebera o no seguinte chamado de l
}

//Funçao auxiliar para remover do inicio do tipo No
No* rem_ini(No* l){
	No* p->l->prox;
	free(l);
	return p;
}

void push(Pilha* p, float v){
	p->prim = ins_ini(p->prim, v);
}

float vazia(Pilha* p){
	return p->prim == NULL; //forco o retorno de p->prim apontar para null entao seu campo topo e seu campo prox sera NULL
}

float pop(Pilha* p){
	float v;

	if( vazia(p) ){
		printf("A pilha esta vazia!! \n");
		exit(1);
	}
	else{
		v = p->prim->topo; //v recebe o ponteiro p que aponta para o ponteiro prim q aponta para seu campo topo
		p->prim = rem_ini(p->prim);
		return v;
	}
}

void libera(Pilha* p){
	No* q = p->prim;
	while(q != NULL){
		No* t = q->prox;
		free(q);
		q = t;
	}
	free(p);
}