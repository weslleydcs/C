#include <stdio.h>

int main(){
	int *pti, veti[5] = {10, 7, 2, 6, 3};
	pti = veti;
	
	printf("%d\n", *pti); //Alternativa A - *pti = 10? SIM
	
	printf("\n%d\n", *(pti + 2)); //Alternativa B - Impressão do valor da terceira posição [2]. Pos[0 + 2]. *(pti + 2)) = 2? SIM
	
	printf("\n%d\n", pti[4]); //Alternativa C - pti[4] = 3? SIM
	
	printf("\n%d FALSO\n", pti[1]); //Alternativa D - pti[1] = 10? NÃO, é igual a 7
	
	printf("\n%d\n", *(veti + 3)); //Alternativa E - pti[1] = 6? SIM
	
	return 0;
}
