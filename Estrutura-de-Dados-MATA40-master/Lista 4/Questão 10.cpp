#include <stdio.h>

int main(){
	int i, j;
	int matr[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	
	for(j = 0; j <= 12; j++){
		for(i = 1; i <= j-1; i++){
		} 
	}
	printf("**matr = 1?: \n%d\n SIM\n\n", **matr); //Alternativa A **matr = 1? SIM
	
	printf("\n\n*(*(matr + 1) + 2) = 7?: \n%d\n SIM\n", *(*(matr + 1) + 2)); //Alternativa B *(*(matr + 1) + 2) = 7? SIM
	
	printf("\n\n*(matr[2] + 3) = 12?: \n%d\n SIM\n", *(matr[2] + 3)); //Alternativa C *(matr[2] + 3) = 12? SIM
	
	printf("\n\n(*(matr+2))[2] = 11?: \n%d\n SIM\n", (*(matr+2))[2]); //Alternativa D (*(matr+2))[2] = 11? SIM
	
	printf("\n\n*((*matr)+1) = 5?: \n%d\n NAO, ALTERNATIVA FALSA, LETRA E\n", *((*matr)+1)); //Alternativa E *((*matr)+1) = 5? NÃO, é igual a 2
	
	return 0;
}
