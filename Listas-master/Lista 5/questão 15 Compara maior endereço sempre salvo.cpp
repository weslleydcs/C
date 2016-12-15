//Crie uma função que receba dois valores inteiros. Compare seus endereços e exiba o maior endereço.

#include <stdio.h>
#include <stdlib.h>

int compara(int *x, int *y){
	
	if(x > y){
		printf("\nO endereco de maior valor e o da variavel A que tem valor %d\n\n", x);
	}
	else{
		printf("\nO endereco de maior valor e o da variavel B que tem valor %d\n\n", y);
	}
}

int main(){
	int a, b;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	compara(&a, &b);
	
	system("Pause");
	return 0;
}
