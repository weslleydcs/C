#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define peso1 2
#define peso2 3
#define peso3 5

float nota_final(float lab, float ava, float exame){ //Fun��o que calcula a nota ponderada
	
	float nota_ponderada;
	
	nota_ponderada = ((lab * peso1) + (ava * peso2) + (exame * peso3)) / (peso1 + peso2 + peso3); //Calculo da nota ponderada
	
	if(nota_ponderada >= 8){ 
		printf("\n\nO conceito da sua nota e A e sua media e\n");
		return nota_ponderada;
	}
	if(nota_ponderada >= 7 && nota_ponderada < 8){
		printf("\n\nO conceito da sua nota e B e sua media e\n");
		return nota_ponderada;
	}
	if(nota_ponderada >= 6 && nota_ponderada < 7){
		printf("\n\nO conceito da sua nota e C e sua media e \n");
		return nota_ponderada;
	}
	if(nota_ponderada >= 5 && nota_ponderada < 6){
		printf("\n\nO conceito da sua nota e D e sua media e \n");
		return nota_ponderada;
	}
	if(nota_ponderada >= 0 && nota_ponderada < 5){
		printf("\n\nO conceito da sua nota e E e sua media e \n");
		return nota_ponderada;
	}
	
	printf("\n\n");
	return 0;
}

int main(){ //Fun��o main que pede ao usu�rio que digite o conte�do das 3 vari�veis: nota do laborat�rio, avalia��o e exame final
	
	float lab, ava, exame;
	
	printf("Digite o valor da nota do seu trabalho de laboratorio: \n"); //nota do laborat�rio
	scanf("%f", &lab);
	
	printf("\n\nDigite o valor da nota da sua avaliacao semestral: \n"); //avalia��o
	scanf("%f", &ava);
	
	printf("\n\nDigite o valor da nota do seu exame final: \n"); //exame final
	scanf("%f", &exame);
	
	printf("%.2f", nota_final(lab, ava, exame)); //Impress�o da fun��o nota_final
	
	return 0;
}
