#include <stdio.h>
#define gratificacao 50
/*Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o seu sal�rio a receber,sabendo-se
que o funcion�rio tem gratifica��o de R$50 e paga imposto de 10% sobre o sal�rio base.*/

float salario_total(){
	float salario, aumento, imposto, novo_salario;
	
	printf("Digite o valor do seu salario base: \n");
	scanf("%f", &salario); //ex: 50
	
	aumento = salario + gratificacao; //aumento = 50 + 50(exemplo de gratifica��o) == 100
	imposto = salario - ( (salario * 10)/100 ); //imposto = 50 - ( (50 * 10)/100 ) == 50 - 5 = 45
	
	novo_salario = aumento + imposto; //novo_salario = 100 + 45 = 145 reais
	
	printf("\n\nSeu novo salario com uma gratificacao de 50 reais e um imposto de 10 por cento sob o salario base tem valor: \n");
	return novo_salario;
}

int main(){
	
	printf("\n%f", salario_total());
	
	return 0;
}
