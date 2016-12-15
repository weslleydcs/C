#include <stdio.h>
//Verificar paridade do número

int paridade(int &x){ //Função que verifica a paridade de x

	if(x%2 == 0){
		printf("\nO numero digitado e par");
	}
	else{
		printf("\nO numero digitado e impar");	
	}
	
	printf("\n\n");
	return x;
}

int main(){ //Função main que pede ao usuário que digite um número e chame a função paridade dando este número como parâmetro
	
	int x;
	
	printf("Digite um numero: \n");
	scanf("%d", &x);
	
	printf("%d", paridade(x)); //Impressão da função paridade
	
	return 0;
}
