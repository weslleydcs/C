#include <stdio.h>
#include <stdlib.h>
/*Fa�aum programa que leia dois valores inteiros e chame umasub-rotina que receba estas 2 vari�veis e troque seu conte�do, ou seja, esta rotina � 
chamada passando duas vari�veis A e B por exemplo, e ap�s a execu��o da rotina, A conter� valor de B e B conter� o valor de A. */ 


int altera(int &x, int &y)
{
	int t;
	t = x; x = y; y = t;
}

int main()
{
	int a, b;
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	printf("\n\nO valor de A e B sao: %d e %d\n", a, b);
	altera(a,b);
	printf("\n\nDepois de alterar os valores A tem valor %d e B tem valor %d\n\n\n", a, b);
	
	system("Pause");
	return 0;
}
