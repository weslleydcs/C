#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE_FILA 10
#define ERRO_FILA_VAZIA -1
#define ERRO_FILA_CHEIA -2

struct fila {
	int ini, fim;
	float vet[CAPACIDADE_FILA];
};
typedef struct fila Fila;

Fila *cria(void) {
	Fila *fila = malloc(sizeof(Fila));
	fila->ini = 0;
	fila->fim = 0;
	return fila;
}

int vazia(Fila *f) {
	return f->ini == f->fim;
}
int cheia(Fila *f) {
	return f->fim == (f->ini + CAPACIDADE_FILA - 1) % CAPACIDADE_FILA;
}
int insere(Fila *f, float v) {
	if (cheia(f)) {
		return ERRO_FILA_CHEIA;
	} else {
		f->vet[f->fim] = v;
		f->fim++;
		return 0;
	}
}
float retira(Fila *f) {
	if (vazia(f)) {
		return ERRO_FILA_VAZIA;
	} else {
		f->fim = (f->fim + CAPACIDADE_FILA - 1) % CAPACIDADE_FILA;
		return f->vet[f->fim];
	}
}
void imprime(Fila *f) {
	int i = f->ini;
	while (i != f->fim) {
		printf("%.2f ", f->vet[i]);
		i = (i + 1) % CAPACIDADE_FILA;
	}
	printf("\n");
}
void libera(Fila *f) {
	free(f);
}
int tamanho(Fila *f) {
	int tam = f->fim - f->ini;
	if (tam < 0) {
		tam += CAPACIDADE_FILA;
	}
	return tam;
}

void testa_condicao(int condicao) {
	if (condicao) {
		printf(".");
	} else {
		printf("F");
	}
}

int main(int argc, char *argv[]) {
	Fila *f = cria();

	testa_condicao(vazia(f));
	testa_condicao(tamanho(f) == 0);
	testa_condicao(insere(f, 3) != ERRO_FILA_CHEIA);
	testa_condicao(!vazia(f));
	testa_condicao(retira(f) == 3);

	for (int i = 1; i <= CAPACIDADE_FILA - 1; i++) {
		testa_condicao(insere(f, i) != ERRO_FILA_CHEIA);
		testa_condicao(tamanho(f) == i);
	}
	testa_condicao(insere(f, 1234) == ERRO_FILA_CHEIA);
	testa_condicao(tamanho(f) == CAPACIDADE_FILA - 1);

	printf("\n");

	imprime(f);

	libera(f);
	return 0;
}