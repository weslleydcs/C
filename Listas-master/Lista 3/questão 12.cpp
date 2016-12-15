#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int divisores(int i)
{
	int n;
	printf("Digite um inteiro: ");
	scanf("%d",&n);
		
	for (i = 1; i <= n;i++)
	{
		if(n%i==0)
		{
			printf("%d e divisor de %d\n", i, n);
		}
	}
} 

int main()
{
	int i, n;
	divisores(1);
	return 0;
}
