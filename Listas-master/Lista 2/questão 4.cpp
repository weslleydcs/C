#include <stdio.h>
#include <stdlib.h>

/* Receber o salario de um funcionário, calcular e mostrar seu novo salário, sabendo que
ele recebeu um aumento de 25%. */

int main(){
	int sal1, sal2;
	
	printf("Digite o salario inicial do funcionario em reais: ");
	scanf("%d", &sal1);
	 
	sal2 = (25*sal1)/100 + sal1;
	 
	printf("O funcionario teve um aumento de 25 porcento no seu salario e seu novo salario em reais tem valor igual a: %d\n", sal2);
	 
	system("Pause");
	return 0;
}
