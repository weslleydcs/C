#include <stdio.h>
//Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s.

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
