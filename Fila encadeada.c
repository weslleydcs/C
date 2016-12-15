#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO_FILA_VAZIA -1

struct no {
	float v;
	struct no *prox;
};
typedef struct no No;

struct fila {
	No *ini, *fim;
};
typedef struct fila Fila;

Fila *cria(void) {
	Fila *fila = malloc(sizeof(Fila));
	fila->ini = NULL;
	fila->fim = NULL;
	return fila;
}
No *cria_no(float v) {
	No *no = malloc(sizeof(No));
	no->v = v;
	no->prox = NULL;
	return no;
}
int vazia(Fila *f) {
	return f->ini == NULL && f->fim == NULL;
}
int insere(Fila *f, float v) {
	if (vazia(f)) {
		No *no = cria_no(v);
		f->ini = no;
		f->fim = no;
	} else {
		No *no = cria_no(v);
		f->fim->prox = no;
		f->fim = no;
	}
	return 0;
}
float retira(Fila *f) {
	if (vazia(f)) {
		return ERRO_FILA_VAZIA;
	} else {
		No *primeiro = f->ini;
		float valor = primeiro->v;
		f->ini = primeiro->prox;
		free(primeiro);
		if (f->ini == NULL) {
			f->fim = NULL;
		}
		return valor;
	}
}
void imprime(Fila *f) {
	No *no = f->ini;
	while (no) {
		printf("%.0f ", no->v);
		no = no->prox;
	}
	printf("\n");
}
void libera(Fila *f) {
	while (retira(f) != ERRO_FILA_VAZIA);
}
int tamanho(Fila *f) {
	int tam = 0;
	No *no = f->ini;
	while (no) {
		tam++;
		no = no->prox;
	}
	printf("\n");
	return tam;
}

void testa_condicao(int condicao) {
	if (condicao) {
		printf(".");
	} else {
		printf("F");
	}
}

int main(int argc, char const *argv[]) {
	char s[100];
	int capacidade;
	int n;
	int valor;

	Fila *fila = cria();

	while (scanf("%s", s) && strcmp(s, "q") != 0) {
		switch (s[0]) {
			case 'i':
				scanf("%d", &n);
				insere(fila, n);
				break;
			case 'r':
				scanf("%d", &n);
				valor = retira(fila);
				if (valor == ERRO_FILA_VAZIA)
					printf("erro: vazia\n");
				else
					printf("%d\n", valor);
				break;
			case 'p':
				imprime(fila);
				break;
		}
	}
	
	libera(fila);

	return 0;
}

