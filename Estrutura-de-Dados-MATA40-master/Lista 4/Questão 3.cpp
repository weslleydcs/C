#include <stdio.h>

int main(){
	int i, j;
	int matrx[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	
	for(j = 0; j <= 12; j++){
		for(i = 1; i <= j-1; i++){
		} 
	}
	printf("%d", matrx[1][2]); //Impressão do conteúdo da posição [1][2] da matriz matrx com valor = 7.
	
	return 0;
}
