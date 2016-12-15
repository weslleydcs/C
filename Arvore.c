#include <stdio.h>
#include <stdlib.h>

struct no{
	int profundidade;//VERIFICA PROFUNDIDADE DA ARVORE
	int valor;
	struct no* dir;
	struct no* esq;
};

typedef struct no Arvore;

Arvore* cria(int v){
	Arvore* a = malloc(sizeof(Arvore));
	a->valor = v;
	a->esq = NULL;
	a->dir = NULL;
	return a;	
}

int conta_no(Arvore* raiz){
	int cont = 1;	
	if(raiz == NULL){
		return 0;	
	}	
	else{
		return cont + conta_no(raiz->esq) + conta_no(raiz->dir);
	}
}	

int vazia(Arvore* raiz){
	if(raiz == NULL){
		return 0;
	}
	return 1;	
}

void imprime(Arvore* raiz){
	if(vazia(raiz)){
		printf("%d",raiz->valor);
		imprime(raiz->esq);
		imprime(raiz->dir);
	}	
}

void busca(Arvore* raiz, int n){
	if(vazia(raiz)){
		if(raiz->valor == n){
			printf("ACHOU");
		}
		else{
			busca(raiz->esq,n);
			busca(raiz->dir,n);
		}
	}				
}

int altura(Arvore* raiz){
	if(raiz != NULL){
		int x,y;
		x = altura(raiz->esq);
		y = altura(raiz->dir);
		if(x < y){
			return y + 1;
		}
		else{	
			return x + 1;
		}
	}
	else{
		return 0;
	}
}

void verif_profundidade(Arvore* raiz, int a){
	if(raiz!=NULL){
		raiz->profundidade = a;
		verif_profundidade(raiz->esq, a + 1);		
		verif_profundidade(raiz->dir, a + 1);
	}
}


void imprime_recuo(Arvore* raiz){
	int i;
	if(raiz!=NULL){
		for(i = 0; i <raiz->profundidade; i++){
			printf(" ");
		}
		printf("%d",raiz->valor);
		printf("\n");
		imprime_recuo(raiz->esq);
		imprime_recuo(raiz->dir);
	}
}	

int main(){
	int a = 0;
	//DEFINE A ARVORE
	Arvore* teste = cria(1);
	Arvore* teste2 = cria(2);
	Arvore* teste3 = cria(3);
	Arvore* teste4 = cria(4);
	Arvore* teste5 = cria(5);
	teste->esq = teste2;
	teste->dir = teste3;
	teste2->esq = teste5;
	teste2->dir = teste4;
	//
	printf("%d\n",conta_no(teste)); // IMPRIME QUANTOS NOS
	imprime(teste);//IMPRIME A ARVORE
	printf("\n%d\n",vazia(teste));//VERIFICA SE TA VAZIA
	busca(teste,3);//BUSCA ELEMENTO NA ARVORE
	printf("\n%d",altura(teste));//IMPRIME ALTURA DA ARVORE
	verif_profundidade(teste,a);//ATRIBUI PROFUNDIDADE A ARVORE
	printf("\n%d\n",teste5->profundidade);//TESTE DE PROFUNDIDADE
	imprime_recuo(teste);//IMPRIME ARVORE COM RECUO
	return 0;
}