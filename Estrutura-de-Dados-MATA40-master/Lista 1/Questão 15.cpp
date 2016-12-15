// 15 - Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.
#include <stdio.h>

float salario_funcionario(){
	float salario, aumento, novo_salario;
	
	printf("Digite o valor do seu salario: \n");
	scanf("%f", &salario);
	
	printf("\n\nDigite o percentual de aumento do seu salario: \n");
	scanf("%f", &aumento);
	
	novo_salario = salario + ((salario * aumento)/100);
	
	printf("\n\nCom um aumento de %f por cento no seu salario, seu novo salario tera o valor em reais de \n", aumento);
	return novo_salario;
}

int main(){
	
	printf("\n%f", salario_funcionario());
	
	return 0;
}
