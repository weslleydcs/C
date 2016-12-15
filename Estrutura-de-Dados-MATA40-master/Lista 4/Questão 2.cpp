#include <stdio.h>

int main(){
	int j;
	int vet[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
	
	for(j = 0; j <= 30; j++){
		vet[j] = j*j; 
		printf("\n\n%d\n", vet[j]); //Acessamos o vetor imprimindo a instrução da linha 8(j*j), ou seja, o quadrado do elemento que esta na posição j do vetor.
	}
	
	return 0;
}
