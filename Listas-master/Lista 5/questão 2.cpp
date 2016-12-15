/*Faça um programa que leia 2 valores inteiros e chame uma sub-rotina que receba estes 2 valores de entrada e
retorne o maior valor na primeira variável e o segundo maior valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela */

#include <stdio.h>
#include <stdlib.h>

int recebe(int &x, int &y)
{
	int t;
	if(x < y){
		t = x; x = y; y = t;
	}	
}

int main()
{
	int a, b;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	recebe(a,b);
	printf("\n\nMaior valor digitado: %d | Segundo maior valor digitado: %d\n\n", a, b);
	
	system("Pause");
	return 0;
}
