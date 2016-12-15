#include <stdio.h>
//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

float salario(){
	float din_hora, horas_por_mes, salario_total;
	
	printf("Informe a quantia em dinheiro que voce recebe em horas: \n");
	scanf("%f", &din_hora);
	
	printf("\nInforme o numero de horas que voce trabalha por mes: \n");
	scanf("%f", &horas_por_mes);
	
	salario_total = (horas_por_mes * din_hora);
	
	//printf("\n\nO salario total que voce recebe por mes tem a quantia de: \n%f reais", salario_total);
	return salario_total;
}

int main(){
	
	printf("\n%f", salario());
	
	return 0;
}
