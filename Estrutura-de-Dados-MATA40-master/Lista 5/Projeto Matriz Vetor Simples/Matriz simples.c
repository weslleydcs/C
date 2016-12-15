 #include <stdlib.h> 
 #include <stdio.h>  
 #include "matriz.h"
 
struct matriz{
	int linha;
	int coluna;
	int* pos;
};
 
Matriz* cria(int m, int n){
	Matriz* matx = (Matriz*) malloc(sizeof(Matriz));
	matx->linha = m;
	matx->coluna = n;
	matx->pos = (int*) malloc(m*n*sizeof(float));
	return matx;
}
 
void libera(Matriz* matx){
	free(matx->pos);
	free(matx);
}
 
float acessa(Matriz* matx, int i, int j){
	int h; 
	h = (i * matx->coluna + j);
	return matx->pos[h];
}
 
void atribui(Matriz* matx, int i, int j, float valor){
	int h; 
	h = (i * matx->coluna) + j;
	matx->pos[h] = valor;
}
 
int linhas(Matriz* matx){
	return matx->linha;
}
 
int colunas(Matriz* matx){
	return matx->coluna; 
} 
