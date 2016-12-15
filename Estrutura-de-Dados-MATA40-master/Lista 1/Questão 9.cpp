#include <stdio.h>
//Faça um Programa que leia o tamanho de um lado do quadrado e calcule sua área em seguida mostre o dobro desta área para o usuário.

float quadrado(){
	float lado, area, dobro_da_area;
	
	printf("Digite o valor do lado de um quadrado: \n");
	scanf("%f", &lado);
	
	area = (lado * lado);
	dobro_da_area = (2 * area);
	
	printf("\n\nO valor da Area do quadrado tem valor: \n%f", area);
	printf("\n\nO dobro desta Area tem valor: \n%f", dobro_da_area);
	
	return 0;
}

int main(){
	
	printf("\n\n\n%f", quadrado());
	
	return 0;
}
