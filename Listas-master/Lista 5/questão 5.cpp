/* Crie um programa que contenha uma fun��o que permita passar por par�metro dois n�meros inteiros A e B. A fun��o dever� calcular a soma entre estes dois n�meros
e armazenar o resultado na vari�vel A. Esta fun��o n�o dever� possuir retorno, mas dever� modificar o valor do primeiro n�mero. Imprima os valores de A e B na fun��o
principal. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int modifica(int &x, int &y){
	x = x + y;
}

int main(){
	int a, b;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	modifica(a,b);
	printf("\nDepois de modificados o valor de A eh %d e o valor de B eh %d\n\n", a, b);
	
	system("Pause");
	return 0;
}

