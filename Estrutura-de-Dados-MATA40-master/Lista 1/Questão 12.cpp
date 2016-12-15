// 12 - Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas.
#include <stdio.h>

float media_aritmetica(){
	float nota1, nota2, nota3, media_aritmetica;
	
	printf("Voce sera solicitado a digitar suas 3 notas para obter sua media aritmetica: \n");
	
	printf("\n\nDigite o valor da sua primeira nota: \n");
	scanf("%f", &nota1);
	
	printf("\n\nDigite o valor da sua segunda nota: \n");
	scanf("%f", &nota2);
	
	printf("\n\nDigite o valor da sua terceira nota: \n");
	scanf("%f", &nota3);
	
	media_aritmetica = ((nota1 + nota2 + nota3)/3);
	
	//printf("\nSua media aritmetica tem valor igual a: \n%f", media_aritmetica);
	return media_aritmetica;
}

int main(){
	
	printf("\n%f", media_aritmetica());
	
	return 0;
}
