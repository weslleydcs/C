#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;
	printf("Digite um numero maior que zero: ");
	scanf("%d", &a);
	
	printf("Digite um numero qualquer sendo ele menor que o primeiro valor digitado: ");
	scanf("%d", &b);
	
	printf("Digite um dos numeros entre um a quatro para efetuar opraçoes de soma subtracao produto ou divisao: ");
	scanf("%d", &c);
	
	do{
		a + b;
	} while(c = 1);
	
	do{	
		a - b;
	} while(c = 2);
	
	do{
		a * b;
	} while(c = 3);
	
	do{
		a / b;
	} while(c = 4);
	
	system("Pause");
	return 0;
		
}
