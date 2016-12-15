#include <stdio.h>
#include <stdlib.h>

/*Receber o salário de um trabalhador e o valor da prestação de um empréstimo, se a
prestação for maior que 20% do salário imprima: “Empréstimo não concedido”, caso
contrario imprima: “Empréstimo Concedido” */

int main(){
	int sal, emp;
	
	printf("Digite o valor do salario do trabalhador: ");
	scanf("%d", &sal);
	
	printf("Digite o valor da prestaçao de emprestimo desejado: ");
	scanf("%d", &emp);
	
	if(emp > (20*sal)/100){
		printf("Emprestimo nao concedido\n");
	}
	else{
		printf("Emprestimo concedido\n");
	}
	
	system("Pause");
	return 0;
}
