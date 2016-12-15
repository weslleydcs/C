#include <stdio.h>
//Faça um programa que calcule e mostre a área de um triângulo. Supondo que: Área = (base *altura) / 2.

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
