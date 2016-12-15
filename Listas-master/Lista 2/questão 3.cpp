#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c, res;
	printf("Digite o valor do primeiro numero: ");
	scanf("%d", &a);
	
	printf("Digite o valor do segundo numero: ");
	scanf("%d", &b);
	
	printf("Digite o valor do terceiro numero: ");
	scanf("%d", &c);
	
	res = (a*a) + (b*b) + (c*c);
	
	printf("O valor da soma dos quadrados dos 3 valores e: %d\n", res);
	
	system("Pause");
	return 0;
	
}
