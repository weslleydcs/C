#include <stdio.h>
//Ordem decrescente entre quatro números

float numeros(float &a, float &b, float &c, float &d){ //Função que coloca so números recebidos como parâmetro da função main em ordem crescente

	if(a < b && b < c){
		if(d > c){
			printf("\nOs numeros em ordem decrescente sao: %f %f %f %f", d, c, b, a); //d,c,b,a
		}
		if(d > b && d < c){
			printf("\nOs numeros em ordem decrescente sao: %f %f %f %f", c, d, b, a); 
		}
		if(d > a && d < b){
			printf("\nOs numeros em ordem decrescente sao: %f %f %f %f", c, b, d, a);	
		}
		if(a > d){
			printf("\nOs numeros em ordem decrescente sao: %f %f %f %f", c, b, a, d); 
		}		
	}
	
	printf("\n\n");
	return 0;						
}

int main(){ //Função main que pede ao usuário que digite 3 números em ordem crescente e um quarto número qualquer
	float a, b, c, d;
	
	printf("Digite 4 numeros distintos sendo os 3 primeiros em ordem crescente: \n");
	
	printf("\nDigite o valor do primeiro numero: \n");
	scanf("%f", &a);
	
	printf("\nDigite o valor do segundo numero: \n");
	scanf("%f", &b);
	
	printf("\nDigite o valor do terceiro numero: \n");
	scanf("%f", &c);
	
	printf("\nDigite o valor do quarto numero: \n");
	scanf("%f", &d);
	
	printf("%f", numeros(a,b,c,d)); //Impressão da função numeros
	
	return 0;
}
