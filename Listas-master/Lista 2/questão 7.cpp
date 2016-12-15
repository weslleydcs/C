#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Sejam a e b os catetos de um triangulo, faça um programa que entre com os valores de
a e b, e ache o valor da hipotenusa e imprima o resultado. */

int main(){
	float hip, a, b;
	printf("Digite o valor do cateto 1: ");
	scanf("%f", &a);
	
	printf("Digite o valor do cateto 2: ");
	scanf("%f", &b);
	
	hip = sqrt((a*a) + (b*b));
	printf("O valor da hipotenusa e: %f\n", hip);
	
	system("Pause");
	return 0;
}
