#include <stdio.h>
//Formas de escrever três valores

float valores(float &A, float &B, float &C){ //Função que faz 3 tipos de organização com os 3 números recebidos como parâmetro da função main
	
	int I;
	printf("\nDigite 1 Para organizar os valores em ordem crescente: ");
	printf("\nDigite 2 Para organizar os valores em ordem decrescente: ");
	printf("\nDigite 3 Para inserir o maior valor entre os outros dois valores: \n\n");
	scanf("%d", &I);
	
	switch(I)
	{
		case 1: //Caso o usuário digite 1 o programa organiza os 3 números em ordem crescente
			if(A > B && B > C){
				printf("\n\n%f \n%f \n%f", C,B,A);
			}
			if(A > C && C > B){
				printf("\n\n%f \n%f \n%f", B,C,A);
			}
			if(B > C && C > A){
				printf("\n\n%f \n%f \n%f", A,C,B);
			}
			if(B > A && A > C){
				printf("\n\n%f \n%f \n%f", C,A,B);
			}
			if(C > B && B > A){
				printf("\n\n%f \n%f \n%f", A,B,C);
			}
			if(C > A && A > B){
				printf("\n\n%f \n%f \n%f", B,A,C);
			}
			break;
		
		
		case 2: //Caso o usuário digite 2 o programa organiza os 3 números em ordem decrescente
			if(A > B && B > C){
				printf("\n\n%f \n%f \n%f", A,B,C);
			}
			if(A > C && C > B){
				printf("\n\n%f \n%f \n%f", A,C,B);
			}
			if(B > C && C > A){
				printf("\n\n%f \n%f \n%f", B,C,A);
			}
			if(B > A && A > C){
				printf("\n\n%f \n%f \n%f", B,A,C);
			}
			if(C > B && B > A){
				printf("\n\n%f \n%f \n%f", C,B,A);
			}
			if(C > A && A > B){
				printf("\n\n%f \n%f \n%f", C,A,B);
			}
			break;
			
		
		case 3: //Caso o usuário digite 3 o programa organiza os 3 números de modo que o maior número fique entre os outros 2.
			if(A > B && B > C){
				printf("\n\n%f \n%f \n%f", B,A,C);
			}
			if(A > C && C > B){
				printf("\n\n%f \n%f \n%f", C,A,B);
			}
			if(B > C && C > A){
				printf("\n\n%f \n%f \n%f", C,B,A);
			}
			if(B > A && A > C){
				printf("\n\n%f \n%f \n%f", A,B,C);
			}
			if(C > B && B > A){
				printf("\n\n%f \n%f \n%f", B,C,A);
			}
			if(C > A && A > B){
				printf("\n\n%f \n%f \n%f", A,C,B);
			}
			break;
			
	}
	
	printf("\n\n");
	return 0;
}
			
int main(){ //Função main que pede ao usuário que digite 3 números com valores distintos.
	
	float A, B, C;
	
	printf("Voce sera solicitado a digitar 3 valores distintos: \n");
	
	printf("\nDigite o primeiro valor: \n");
	scanf("%f", &A);
	
	printf("\nDigite o segundo valor: \n");
	scanf("%f", &B);
	
	printf("\nDigite o terceiro valor: \n");
	scanf("%f", &C);
	
	printf("%f", valores(A,B,C)); //Impressão da função valores
	
	return 0;
}
