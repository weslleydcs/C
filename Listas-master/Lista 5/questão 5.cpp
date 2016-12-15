/* Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. A função deverá calcular a soma entre estes dois números
e armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro número. Imprima os valores de A e B na função
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

