#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main(){
	float a = 10, b = 15, c = 20, d = 25;
	
	pilha* x;
	x = pilha_cria();
	
	pilha_push(x, a);
	pilha_push(x, b);
	pilha_push(x, c);
	pilha_push(x, d);

	
	pilha_pop(x);
	
	pilha_libera(x);
	
	pilha_vazia(x);
	
	return 0;
}
