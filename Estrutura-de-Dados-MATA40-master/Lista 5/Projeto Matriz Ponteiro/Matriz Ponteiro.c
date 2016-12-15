#include <stdlib.h> // usando bibliotecas malloc, free, exit 
#include <stdio.h> 
#include "matriz.h" // importação da biblioteca criada manualmente
 
struct matriz{
	int linha;
	int coluna;
	float** pos;
};
 
Matriz* cria(int m, int n){
	int i;
 	Matriz* matx = (Matriz*) malloc(sizeof(Matriz));
 	matx->linha = m;
 	matx->coluna = n;
 	matx->pos = (float**) malloc(m*sizeof(float*));
 	for(i=0; i<m; i++){
 		matx->pos[i] = (float*) malloc(n*sizeof(float));
 	}
 	return matx;
 }
 
void libera(Matriz* matx){
	int i;
	for (i=0; i < matx->linha; i++){
		free(matx->pos[i]);
	}
 	free(matx->pos);
 	free(matx);
}
 
float acessa(Matriz* matx, int i, int j){
	return matx->pos[i][j];
}
 
void atribui(Matriz* matx, int i, int j, float valor) {
 	matx->pos[i][j] = valor;
 }
 
int linhas(Matriz* matx){
	return matx->linha;
}
 
int colunas(Matriz* matx){
	return matx->coluna;
}

 
