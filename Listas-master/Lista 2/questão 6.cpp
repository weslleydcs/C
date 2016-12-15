#include <stdio.h>
#include <stdlib.h>

/*Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite
o numero de dias trabalhados pelo encanador e imprima a quantia liquida que devera
ser paga, sabendo-se que são descontados 8% para imposto de renda.*/

int main(){
	int d;
	float sb, sl;
	printf("Digite o numero de dias de trabalho do funcionario: ");
	scanf("%d", &d);
	
	sb = 30 * d;
	printf("O valor do salario bruto do funcionario baseado em dias de trabalho por 30 reais cada e\n\n: %f", sb);
	
	sl = sb - (8*sb)/100;
	printf("O valor do salario liquido do funcionario baseado em dias de trabalho por 30 reais cada e\n\n: %f", sl);
	
	system("Pause");
	return 0;
	
}
