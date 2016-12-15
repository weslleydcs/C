#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n , a;
	printf("Digite um numero n: ");
	scanf("%d", &n);
	
	a = (n-1) + (n-2);
	
	if(n == 0){
		printf("A sequencia de fibonacci de 0 tem valor igual a: %d\n", n);
	}
	else if(n == 1){
		printf("A sequencia de fibonacci de 1 tem valor igual a: %d\n", n);
	}
	else if(a > 4000000){
		printf("Nao calcular o valor da sequencia de fibonacci porque tem valor maior que 4 milhoes\n\n");
	}
	else{
		a = (n-1) + (n-2);
		printf("A sequencia de fibonacci de n tem valor igual a: %d\n", a);
	}
	
	
	system("Pause");
	return 0;
}

