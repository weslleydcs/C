#include <stdio.h>
//Maior valor entre dois n�meros

float maior(float &a, float &b){ //Fun��o maior que verifica qual dos 2 n�meros recebidos como par�metro � o maior

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

int main(){ //Fun��o main que pede ao usu�rio que digite o valor de 2 n�meros
	
	float a, b;
	
	printf("Digite o valor de um numero: \n");
	scanf("%f", &a);
	
	printf("\nDigite o valor de outro numero: \n");
	scanf("%f", &b);
	
	printf("%f", maior(a,b)); //Impress�o da fun��o maior
	
	return 0;
}
