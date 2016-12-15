#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float simples(float x, float y){
	float  me_sim;
	me_sim = (x + y)/2;	
	return me_sim;
}

float ponderada(float x, float y){
	float me_pond;
	me_pond = (x + (y*2))/3;
	return me_pond;
}

int main()
{

	float n1, n2;
	printf("Digite o valor da sua primeira nota: ");
	scanf("%f", &n1);
	printf("Digite o valor da sua segunda nota: ");
	scanf("%f", &n2);
			
	printf("\nA media simples das suas notas tem valor igual a: %f\n\n", simples(n1,n2)); 	
	printf("A media ponderada das suas notas tem valor igual a: %f\n\n", ponderada(n1,n2));
	
	system("Pause");
	return 0;
}

