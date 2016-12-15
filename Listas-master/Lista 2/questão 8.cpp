#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, inver = 0;
	printf("Digite um numero positivo de 3 digitos: ");
	scanf("%d", &n);
	
	while(n>0){
		inver = (inver*10) + (n%10);
		n = n/10;
	}
	printf("O valor do numero invertido e: %d\n", inver);
	
	system("Pause");
	return 0;
}
