#include <stdio.h>
//Formas de escrever tr�s valores

float valores(float &A, float &B, float &C){ //Fun��o que faz 3 tipos de organiza��o com os 3 n�meros recebidos como par�metro da fun��o main
	
	int I;
	printf("\nDigite 1 Para organizar os valores em ordem crescente: ");
	printf("\nDigite 2 Para organizar os valores em ordem decrescente: ");
	printf("\nDigite 3 Para inserir o maior valor entre os outros dois valores: \n\n");
	scanf("%d", &I);
	
	switch(I)
	{
		case 1: //Caso o usu�rio digite 1 o programa organiza os 3 n�meros em ordem crescente
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
		
		
		case 2: //Caso o usu�rio digite 2 o programa organiza os 3 n�meros em ordem decrescente
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
			
		
		case 3: //Caso o usu�rio digite 3 o programa organiza os 3 n�meros de modo que o maior n�mero fique entre os outros 2.
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
			
int main(){ //Fun��o main que pede ao usu�rio que digite 3 n�meros com valores distintos.
	
	float A, B, C;
	
	printf("Voce sera solicitado a digitar 3 valores distintos: \n");
	
	printf("\nDigite o primeiro valor: \n");
	scanf("%f", &A);
	
	printf("\nDigite o segundo valor: \n");
	scanf("%f", &B);
	
	printf("\nDigite o terceiro valor: \n");
	scanf("%f", &C);
	
	printf("%f", valores(A,B,C)); //Impress�o da fun��o valores
	
	return 0;
}
