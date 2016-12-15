#include <stdio.h>
//Maior valor entre dois números

float maior(float &a, float &b){ //Função maior que verifica qual dos 2 números recebidos como parâmetro é o maior

	if(a > b){
		printf("\nO maior valor e: \n");
		return a;
	}
	if(b > a){
		printf("\nO maior valor e: \n");
		return b;
	}
	if(a == b){
		printf("\nOs valores sao iguais: \n");
		return a;
	}
	
	printf("\n\n");
	return 0;
}

int main(){ //Função main que pede ao usuário que digite o valor de 2 números
	
	float a, b;
	
	printf("Digite o valor de um numero: \n");
	scanf("%f", &a);
	
	printf("\nDigite o valor de outro numero: \n");
	scanf("%f", &b);
	
	printf("%f", maior(a,b)); //Impressão da função maior
	
	return 0;
}
