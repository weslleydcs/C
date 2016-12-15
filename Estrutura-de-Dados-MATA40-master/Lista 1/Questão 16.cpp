#include <stdio.h>
/*Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a receber, sabendo-se
que o funcion�rio tem gratifica��o de 5% sobre o sal�rio base e paga imposto de 7% sobre este sal�rio.*/

float salario_base_funcionario(){
	float salario, gratificacao, imposto, novo_salario;
	
	printf("Digite o valor do seu salario base: \n");
	scanf("%f", &salario);
	
	gratificacao = salario + ( (salario * 5)/100 ); //a gratifica��o tera o valor do salario bae + um aumento de 5%
	imposto = gratificacao - ( (gratificacao * 7)/100 );// o imposto de ter� o valor de 7% referente a gratifica��o(de 5%)
	
	/*Temos um sal�rio base, exemplo = 50 reais e uma gratifica��o de 5%. O novo sal�rio ter� o valor de 52.5. Mas ser� pago um imposto de 7% no valor do novo sal�rio,
ou seja, 52.5 - ( (52.5 * 7)/100 ). Com isto o valor final do sal�rio ter� valor igual a 48,825 reais */
	
	novo_salario = imposto;
	
	printf("\n\nSeu novo salario com uma gratificacao de 5 por cento e um imposto de 7 por cento tem valor em reais de: \n");
	return novo_salario;
}

int main(){
	
	printf("\n%f", salario_base_funcionario());
	
	return 0;
}
