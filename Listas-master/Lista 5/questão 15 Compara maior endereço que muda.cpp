//Crie uma função que receba dois valores inteiros. Compare seus endereços e exiba o maior endereço.

#include <stdio.h>
#include <stdlib.h>

int compara(int x, int y){
	int *p , *q;
	p = &x;
	q = &y;
	
	if(p>q){
		return *p;
	}else{
		return *q;
	}
}

int main(){
	int a, b;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	printf("O valor do maior endereco eh %p\n\n", compara(a,b));

	system("Pause");
	return 0;
}
