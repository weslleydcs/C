#include <stdio.h>
//Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C=(5*(F 32)/9).

float temperatura(){
	float celsius, farenheit;
	
	printf("Digite uma temperatura em graus Farenheit para converte-la para Celsius: \n");
	scanf("%f", &farenheit);
	
	celsius = (5*(farenheit - 32)/9);
	
	//printf("\n\nEsta temperatura na escala Celsius tem valor: \n%f", celsius);
	return celsius;
}

int main(){
	
	printf("\n%f", temperatura());
	
	return 0;
}
