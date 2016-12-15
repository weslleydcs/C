#include <stdio.h>

int main(){
	int i;
	int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	for(i = 0; i < 10; i++){
		printf("%d\n", vet[i]); //Impressão do vetor
	}
	printf("\n\n%d\n", vet[2]); //Impressão da terceira posição do vetor
	
	return 0;
}
