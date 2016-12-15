#include <stdio.h>
//Faça um Programa que peça dois números e imprima a soma.

float soma(float &a, float &b){
	float soma;
	soma = a + b;
	//printf("\nA soma dos 2 numeros digitados tem valor igual a:\n %f", soma);
	return soma;
}

int main(){
	float a, b;
	printf("Voce sera solicitado a digitar 2 numeros quaisquer para serem somados: \n");
	
	printf("\nDigite o valor do primeiro numero: \n");
	scanf("%f", &a);
	
	printf("\nDigite o valor do segundo numero: \n");
	scanf("%f", &b);
	
	printf("\n%f", soma(a,b));
	
	return 0;
}
