#include <stdio.h>
#include <stdlib.h>

int main(){
	float vm, com;
	printf("Digite o valor da venda mensal: ");
	scanf("%f", &vm);
	
	if(vm >= 100000){
		com = 700 + (16*vm)/100;
		printf("O valor da comissao e: %f\n", com);
	}
	else if(vm < 100000 && vm >= 80000){
		com = 650 + (14*vm)/100;
		printf("O valor da comissao e: %f\n", com);
	}
	else if(vm < 80000 && vm >= 60000){
		com = 600 + (14*vm)/100;
		printf("O valor da comissao e: %f\n", com);
	}
	else if(vm < 60000 && vm >= 40000){
		com = 550 + (14*vm)/100;
		printf("O valor da comissao e: %f\n", com);
	}
	else if(vm < 40000 && vm >= 200000){
		com = 500 + (14*vm)/100;
		printf("O valor da comissao e: %f\n", com);
	}
	else if(vm < 20000){
		com = 400 + (14*vm)/100;
		printf("O valor da comissao e: %f\n", com);
	}
	else{
		printf("Nao existe comissao para este valor de venda mensal\n");
	}
	
	system("Pause");
	return 0;
	
}
