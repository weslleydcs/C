#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define MAX 10

int valorespares(int i)
{
	int V[MAX], par = 0;
	for(i=0; i<MAX; i++)
	{
		printf("Digite o %d valor do vetor V: ", i+1);
		scanf("%d", &V[i]);
		
		if(V[i]%2==0)
		{
			par = par + 1;
		}
	}
	printf("A quantidade de valores pares dentro do vetor V equivale a: %d\n\n", par);
}

int main()
{
	int V[MAX], par = 0;
	valorespares(0);
	getch();
	return 0;
}
