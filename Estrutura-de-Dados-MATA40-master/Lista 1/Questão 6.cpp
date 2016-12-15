#include <stdio.h>
//Faça um Programa que peça as 4 notas bimestrais e mostre a média.
float nota(){
	float nota1, nota2, nota3, nota4, media;
	
	printf("Voce sera solicitado a digitar suas 4 notas bimestrais para obter sua media: \n");
	
	printf("\n\nDigite o valor da sua primeira nota bimestral: \n");
	scanf("%f", &nota1);
	
	printf("\n\nDigite o valor da sua segunda nota bimestral: \n");
	scanf("%f", &nota2);
	
	printf("\n\nDigite o valor da sua terceira nota bimestral: \n");
	scanf("%f", &nota3);
	
	printf("\n\nDigite o valor da sua quarta nota bimestral: \n");
	scanf("%f", &nota4);
	
	media = ((nota1 + nota2 + nota3 + nota4)/4);
	
	//printf("\nSua media tem valor igual a: \n%f", media);
	return media;
}

int main(){
	
	printf("\n%f", nota());
	
	return 0;
}
