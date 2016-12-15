#include<stdio.h>
#define pi 3.141592
//Ler o valor do raio de um circulo e calcular a área do circulo correspondente, considere pi = 3:141592.


float raio(){
	float r, area;
	
	printf("Digite o valor do raio do circulo: \n");
	scanf("%f", &r);
	
	area = pi * (r*r);
	
	printf("\nA area do circulo tem valor igual a: \n");
	return area;
}

int main(){
	
	printf("\n%f", raio());
	
	return 0;
}
