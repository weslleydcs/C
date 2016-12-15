#include <stdio.h>

int main(){
	int i = 10, j = 20, *pti = &i, *ptj = &j;
	
	j = pti == ptj;
	printf("%d\n", j); //Alternativa A - Resultado = 0
	
	i = pti - ptj;
	printf("\n%d\n", i); //Alternativa B - Resultado = 1
	
	/*pti += ptj; Transformar em n�o coment�rio e compilar para mostrar o erro
	printf("%d\n", pti); //Alternativa C - Resultado = N�O � VALIDA */
	
	pti++;
	printf("\n%d\n", j); //Alternativa D - Resultado = 0
	
	i = pti || ptj;
	printf("\n%d\n", i); //Alternativa E - Resultado = 1
	
	return 0;
}
