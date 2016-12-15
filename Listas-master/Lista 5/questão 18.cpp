#include<stdio.h>
#define l 3
#define c 3
#include<stdlib.h>

int main(){
	int matriz[l][c], *p; // matriz com 3 linhas 3 colunas.
	
	for (int i=0; i<l ; i++ ){ // Laço que vai imprimir cada endereço de linha/coluna dessa matriz 
		for(int j=0; j<c ; j++){
			printf("%p  ", j);
			
		}
		printf("\n");
	}
	
}
