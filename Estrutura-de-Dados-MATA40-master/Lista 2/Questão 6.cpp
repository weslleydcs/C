#include <stdio.h>
//Verificar paridade do n�mero

int paridade(int &x){ //Fun��o que verifica a paridade de x

	if(x%2 == 0){
		printf("\nO numero digitado e par");
	}
	else{
		printf("\nO numero digitado e impar");	
	}
	
	printf("\n\n");
	return x;
}

int main(){ //Fun��o main que pede ao usu�rio que digite um n�mero e chame a fun��o paridade dando este n�mero como par�metro
	
	int x;
	
	printf("Digite um numero: \n");
	scanf("%d", &x);
	
	printf("%d", paridade(x)); //Impress�o da fun��o paridade
	
	return 0;
}
