/* Fa�a um programa que receba um n�mero inteiro maior do que 1, e verifique se o n�mero fornecido � primo ou n�o
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int primo(int c)
{
	int p;
	printf("Digite um numero qualquer maior do que 1: ");
	scanf("%d", &p);
	while(c=0, p/2, c++);
	{
		if(p%2!=0){
			printf("E primo");
		}
		else
		{
			printf("Nao e primo");
		}
	}	
}

int main()
{
	int p;
	primo(0);
	return 0;
}
