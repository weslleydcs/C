#include <stdio.h>
//Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].
float recebe(int i){
	
	printf("\nO numero digitado foi o numero: \n");
	
	return i;
}

int main(){
	float i;
	printf("Digite um numero: \n");
	scanf("%f", &i);
	
	printf("%f", recebe(i));
	
	return 0;
}
