#include <stdio.h>
#include <stdlib.h>

/*Receber o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo, se a
presta��o for maior que 20% do sal�rio imprima: �Empr�stimo n�o concedido�, caso
contrario imprima: �Empr�stimo Concedido� */

int main(){
	int sal, emp;
	
	printf("Digite o valor do salario do trabalhador: ");
	scanf("%d", &sal);
	
	printf("Digite o valor da presta�ao de emprestimo desejado: ");
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
