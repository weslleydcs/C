#include <stdio.h>
//Faça um Programa que converta metros para centímetros.
float metros_centimetros(){
	float metros, centimetros;
	
	printf("Digite uma distancia em metros que deseja transformar em centimetros: \n");
	scanf("%f", &metros);
	
	centimetros = metros * 100;
	
	//printf("\nA medida desta distancia em metros transformada em centimetros tem valor: \n%f", centimetros, "centimetros");
	return centimetros;
}

int main(){
	
	printf("\n%f", metros_centimetros());
	
	return 0;
}




