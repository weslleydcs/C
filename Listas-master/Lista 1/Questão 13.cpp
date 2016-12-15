#include<stdio.h>
#include<conio.h>
int main(){
	float c, f;
	printf("Temperatura em graus Farenheit.\n");
	scanf("%f",&f);
	c = (5*(f-32)/9);
	printf("Temperatura em graus celsius %.1f.", c);
}
