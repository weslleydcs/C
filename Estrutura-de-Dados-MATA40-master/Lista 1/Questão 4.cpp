#include <stdio.h>
//Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.
int soma_quatro_numeros(int &a, int &b, int &c, int &d){
	int soma;
	soma = a + b + c + d;
	//printf("\nA soma dos 4 numeros digitados tem valor igual a:\n %d", soma);
	return soma;
}

int main(){
	int a, b, c, d;
	printf("Voce sera solicitado a digitar 4 numeros quaisquer para serem somados: \n");
	
	printf("\nDigite o valor do primeiro numero: \n");
	scanf("%d", &a);
	
	printf("\nDigite o valor do segundo numero: \n");
	scanf("%d", &b);
	
	printf("\nDigite o valor do terceiro numero: \n");
	scanf("%d", &c);
	
	printf("\nDigite o valor do quarto numero: \n");
	scanf("%d", &d);
	
	printf("\n%d", soma_quatro_numeros(a,b,c,d));
	
	return 0;
}
