#include <stdio.h>
#include <stdlib.h>
#define MAX 30

struct pilha{
	int topo;
	float vetor[MAX];
};

typedef struct pilha Pilha;

Pilha* cria(void){
	Pilha *p = (Pilha*) malloc(sizeof(Pilha));
	p->topo = 0;
	return p;
}

float cheia(Pilha *p){
	if(p->topo == MAX){
		printf("Estouro de pilha!! \n");
		return 1;
	}
	else{
		return 0;
	}
}

float vazia(Pilha *p){
	if(p->topo == 0){
		printf("Pilha vazia!! \n");
		return 1;
	}
	else{
		return 0;
	}
}

Pilha* push(Pilha *p, float v){
	if( cheia(p) ){
	}
	else{
		p->vetor[p->topo] = v;
		p->topo++;
	}
	//return p->topo;
}

Pilha* pop(Pilha* p){
	if( vazia(p) ){
	}
	else{
		v = p->vetor[p->topo-1];
		p->topo--;
		return v;
	}
}

Pilha* acessa(Pilha *p, float v){ //acessa posição da pilha
	return p->vetor[v];
}

Pilha* libera(Pilha *p){
	free(p);
	return p;
}

int main(){
	Pilha* x;
	float j = 10;

	x = cria();

	push(x, 10);
	//acessa(x, j);
	pop(x);
	libera(x);

	return 0;
}