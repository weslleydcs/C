#include <stdio.h>
//Fa�a um Programa que pe�a um n�mero e ent�o mostre a mensagem O n�mero informado foi [n�mero].
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
