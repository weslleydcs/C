// 14 - Fa�a um programa que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio, sabendose que este sofreu um aumento de 25%.
#include <stdio.h>

float salario_funcionario(){
	float salario, novo_salario;
	
	printf("Digite o valor do seu salario: \n");
	scanf("%f", &salario);
	
	novo_salario = salario + ((salario * 25)/100);
	
	printf("\n\nCom um aumento de 25 por cento no seu salario, seu novo salario tera o valor em reais de \n");
	return novo_salario;
}

int main(){
	
	printf("\n%f", salario_funcionario());
	
	return 0;
}
