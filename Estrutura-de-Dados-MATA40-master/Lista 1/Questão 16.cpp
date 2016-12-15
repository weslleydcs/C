#include <stdio.h>
/*Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se
que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% sobre este salário.*/

float salario_base_funcionario(){
	float salario, gratificacao, imposto, novo_salario;
	
	printf("Digite o valor do seu salario base: \n");
	scanf("%f", &salario);
	
	gratificacao = salario + ( (salario * 5)/100 ); //a gratificação tera o valor do salario bae + um aumento de 5%
	imposto = gratificacao - ( (gratificacao * 7)/100 );// o imposto de terá o valor de 7% referente a gratificação(de 5%)
	
	/*Temos um salário base, exemplo = 50 reais e uma gratificação de 5%. O novo salário terá o valor de 52.5. Mas será pago um imposto de 7% no valor do novo salário,
ou seja, 52.5 - ( (52.5 * 7)/100 ). Com isto o valor final do salário terá valor igual a 48,825 reais */
	
	novo_salario = imposto;
	
	printf("\n\nSeu novo salario com uma gratificacao de 5 por cento e um imposto de 7 por cento tem valor em reais de: \n");
	return novo_salario;
}

int main(){
	
	printf("\n%f", salario_base_funcionario());
	
	return 0;
}
