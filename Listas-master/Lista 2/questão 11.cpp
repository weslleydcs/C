#include <stdio.h>
#include <stdlib.h>

/*Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não
se aposentar. As condições para aposentadora são:Ter pelo menos 65 anos, ou ter
trabalhado pelo menos 30 anos, ou ter pelo menos 60 anos e trabalhado pelo menos 25
anos.*/

int main(){
	int a, b;
	
	printf("Digite a idade do trabalhador: ");
	scanf("%d", &a);
	
	printf("Digite a quantidade em anos de trabalho deste trabalhador: ");
	scanf("%d", &b);
	
	if(a >= 65 || b>= 30 || a>= 60 && b>=25){
		printf("O trabalhador pode se aposentar\n");
	}
	else{
		printf("O trabalhador ainda nao pode se aposentar\n");
	}
	
	system("Pause");
	return 0;
	
}
