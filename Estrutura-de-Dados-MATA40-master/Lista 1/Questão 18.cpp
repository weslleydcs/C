#include <stdio.h>
//Fa�a um programa que calcule e mostre a �rea de um tri�ngulo. Supondo que: �rea = (base *altura) / 2.

float Area_do_triangulo(){
	float area, base, altura;
	
	printf("Digite o valor da base do triangulo: \n");
	scanf("%f", &base);
	
	printf("\n\nDigite o valor da altura do triangulo: \n");
	scanf("%f", &altura);
	
	area = (base * altura)/2;
	
	printf("\n\nA area do triangulo tem valor: \n");
	return area;
}

int main(){
	
	printf("\n%f", Area_do_triangulo());
	
	return 0;
}
