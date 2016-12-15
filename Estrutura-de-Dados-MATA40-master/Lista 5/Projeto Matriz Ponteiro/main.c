#include <stdio.h>
#include <stdlib.h> 
#include "matriz.h" 
#include <windows.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
 	int l, c, linha, coluna;
 	float y;
 	
 	Matriz* x;
	scanf("%d", &linha);
	scanf("%d", &coluna);
 	
	x = cria(linha, coluna);
	
	l = linhas(x);
	c = colunas(x);
	printf("\n%d\n", l);
	printf("\n%d\n", c);
	
	
	//y = acessa(x, linha, coluna);
	//printf("\n%f\n", y); //printa 0
	
	libera(x); //libera cria que é x
	
	//y = acessa(x, linha, coluna);
	//printf("\n%f\n", y); //printa o endereço de y
	
	atribui(x, linha, coluna, 10);
	
	y = acessa(x, linha, coluna); //Neste y = acessa vai ser conferido se realmente o 10 foi atribuido à matriz
	printf("\n%.2f\n", y); //printa o endereço de y depois de executar atribui. Tem que printar 10
	
	return 0;
}

