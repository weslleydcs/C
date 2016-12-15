/* Faça um programa que leia 3 valores inteiros e chame uma sub-rotina que recebe estes 3 valores em entrada e os ordena em ordem crescente,
ou seja, o menor valor na primeira variável, o segundo maior valor na segunda variável, e o maior valor na última variável */

#include <stdio.h>
#include <stdlib.h>

float ordena(float a, float b, float c)
{
	if(a > b && b > c){
		printf("\nValores ordenados: %f %f %f\n\n", a, b, c);
	}
	else if(a > c && c > b){
		printf("\nValores ordenados: %f %f %f\n\n", a, c, b);
	}
	else if(b > a && a > c){
		printf("\nValores ordenados: %f %f %f\n\n", b, a, c);
	}
	else if(b > c && c > a){
		printf("\nValores ordenados: %f %f %f\n\n", b, c, a);
	}
	else if(c > a && a > b){
		printf("\nValores ordenados: %f %f %f\n\n", c, a, b);
	}
	else if(c >  b && b > a){
		printf("\nValores ordenados: %f %f %f\n\n", c, b, a);
	}
	else{
		printf("\nValores iguais\n\n");
	}
}

int main()
{
	float a, b, c;
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	
	printf("Digite o valor de C: ");
	scanf("%f", &c);
	
	ordena(a,b,c);
	
	system("Pause");
	return 0;
}
