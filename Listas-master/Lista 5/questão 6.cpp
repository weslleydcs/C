//implemente uma função que calcule uma raíz do segundo grau do tipo ax² + bx + c = 0.
//sendo int raizes(float a, float b, float c, float x1, float x2)
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float eqdosegundograu(float a, float b, float c)
{
	float delta, x1, x2;
	
	if(a == 0)
	{
		if(b == 0 and c == 0)
		{
			printf("Qualquer resultado de raiz x eh solucao");	
		}
		else if(b == 0 and c != 0)
		{
			printf("Não existe raiz para esta equacao");
		}
		else if(b != 0)
		{
			printf("%f é a única raiz", -c/b);
		}
		
	}
	else // a != 0
	{
		delta = (b*b) - (4*a*c);
		if(delta == 0)
		{
			printf("\nO valor de delta eh %f: ", delta);
			printf("\n%f eh a raiz unica", -b/(2*a));
		}
		else if(delta > 0)
		{
			printf("\nO valor de delta eh %f: ", delta);
			x1 = (-b + sqrt(delta)/(2*a));
        	x2 = (-b - sqrt(delta)/(2*a)); 
			printf("\n\nOs valores das duas raizes reais distintas sao %f e %f", x1, x2);
		}
		else if(delta < 0)
		{
			printf("\nO valor de delta eh %f: ", delta);
			printf("\n\nNao existem raizes reais para delta com valor menor que zero");
		}
	}
}

int main()
{
	float a, b, c;
	printf("Digite os coeficientes reais a, b e c de uma equação da forma: ax² + bx + c = 0");
	printf("\n\nDigite o valor de a: ");
	scanf("%f", &a);
	printf("\nDigite o valor de b: ");
	scanf("%f", &b);
	printf("\nDigite o valor de c: ");
	scanf("%f", &c);
	eqdosegundograu(a, b, c);
	getch();
	return 0;  
}
