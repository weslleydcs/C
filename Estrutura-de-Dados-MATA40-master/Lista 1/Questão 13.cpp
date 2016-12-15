#include <stdio.h>
//Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

float nota_ponderada(){
	float nota1, nota2, nota3, peso1, peso2, peso3, nota_ponderada;
	
	printf("Digite o valor da sua primeira nota: \n");
	scanf("%f", &nota1);
	
	printf("\n\nDigite o valor do peso da sua primeira nota: \n");
	scanf("%f", &peso1);
	
	printf("\n\nDigite o valor da sua segunda nota: \n");
	scanf("%f", &nota2);
	
	printf("\n\nDigite o valor do peso da sua segunda nota: \n");
	scanf("%f", &peso2);
	
	printf("\n\nDigite o valor da sua terceira nota: \n");
	scanf("%f", &nota3);
	
	printf("\n\nDigite o valor do peso da sua terceira nota: \n");
	scanf("%f", &peso3);
	
	nota_ponderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3))/(peso1 + peso2 + peso3);
	
	//printf("\n\nA sua nota ponderada tem valor: \n%f", nota_ponderada);
	return nota_ponderada;
}

int main(){
	
	printf("\n%f", nota_ponderada());
	
	return 0;
}
