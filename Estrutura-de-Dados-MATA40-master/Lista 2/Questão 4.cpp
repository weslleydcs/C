#include <stdio.h>
//Ordem crescente entre tr�s n�meros

float crescente(float a, float b, float c){ // Fun��o crescente que ordenada os 3 n�meros em ordem crescente

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

int main(){ //Fun��o main que pede ao usu�rio que digite 3 n�meros de valores distintos.
	
	float a, b, c;
	
	printf("Digite 3 numeros distintos: \n");
	
	printf("\nDigite o valor do primeiro numero: \n"); //Primeiro N�mero
	scanf("%f", &a);
	
	printf("\nDigite o valor do segundo numero: \n"); //Segundo N�mero
	scanf("%f", &b);
	
	printf("\nDigite o valor do terceiro numero: \n"); //Terceiro N�mero
	scanf("%f", &c);
	
	printf("%f", crescente(a,b,c)); //Impress�o da Fun��o crescente
	
	return 0;
}
