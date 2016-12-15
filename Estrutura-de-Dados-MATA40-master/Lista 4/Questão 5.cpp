#include <stdio.h>

int main(){
	int *pti, i = 10;
	pti = &i;
	
	printf("pti armazena o endereco de i: %d\n", pti); //Alternativa A
	
	printf("\n\n\n *pti e igual a 10: %d\n", *pti); //Alternativa B
	
	*pti = 20;
	printf("\n\n\nAo se executar *pti igual a 20, i tera o valor 20: %d\n", i); //Alternativa C
	
	i = i + 20;
	printf("\n\n\nAo se alterar o valor de i, *pti tambem sera modificado: %d\n", *pti); //Alternativa D
	
	printf("\n\n\npti e igual a 10: %d FALSO\n", pti); //Alternativa E ---------- FALSA
	
	return 0;
}
