#include <stdio.h>
//Ordem crescente entre três números

float crescente(float a, float b, float c){ // Função crescente que ordenada os 3 números em ordem crescente

	if(a > b && b > c){
		printf("\n\nOs numeros em ordem crescente sao: %f %f %f", c, b, a);
	}
	if(a > c && c > b){
		printf("\n\nOs numeros em ordem crescente sao: %f %f %f", b, c, a);
	}
	if(b > c && c > a){
		printf("\n\nOs numeros em ordem crescente sao: %f %f %f", a, c, b);
	}
	if(b > a && a > c){
		printf("\n\nOs numeros em ordem crescente sao: %f %f %f", c, a, b);
	}
	if(c > b && b > a){
		printf("\n\nOs numeros em ordem crescente sao: %f %f %f", a, b, c);
	}
	if(c > a && a > b){
		printf("\n\nOs numeros em ordem crescente sao: %f %f %f", b, a, c);
	}
	
	printf("\n\n");
	return 0;			
}

int main(){ //Função main que pede ao usuário que digite 3 números de valores distintos.
	
	float a, b, c;
	
	printf("Digite 3 numeros distintos: \n");
	
	printf("\nDigite o valor do primeiro numero: \n"); //Primeiro Número
	scanf("%f", &a);
	
	printf("\nDigite o valor do segundo numero: \n"); //Segundo Número
	scanf("%f", &b);
	
	printf("\nDigite o valor do terceiro numero: \n"); //Terceiro Número
	scanf("%f", &c);
	
	printf("%f", crescente(a,b,c)); //Impressão da Função crescente
	
	return 0;
}
