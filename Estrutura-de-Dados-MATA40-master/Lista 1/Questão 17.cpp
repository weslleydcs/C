#include <stdio.h>
#define gratificacao 50
/*Faça um programa que receba o salário base de um funcionário, calcule e mostre o seu salário a receber,sabendo-se
que o funcionário tem gratificação de R$50 e paga imposto de 10% sobre o salário base.*/

float salario_total(){
	float salario, aumento, imposto, novo_salario;
	
	printf("Digite o valor do seu salario base: \n");
	scanf("%f", &salario); //ex: 50
	
	aumento = salario + gratificacao; //aumento = 50 + 50(exemplo de gratificação) == 100
	imposto = salario - ( (salario * 10)/100 ); //imposto = 50 - ( (50 * 10)/100 ) == 50 - 5 = 45
	
	novo_salario = aumento + imposto; //novo_salario = 100 + 45 = 145 reais
	
	printf("\n\nSeu novo salario com uma gratificacao de 50 reais e um imposto de 10 por cento sob o salario base tem valor: \n");
	return novo_salario;
}

int main(){
	
	printf("\n%f", salario_total());
	
	return 0;
}
