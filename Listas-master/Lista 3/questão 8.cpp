#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define V 10	
int operacoes(int i)
{
	int vetor[V];
	int maior=0, menor= vetor[i], soma=0, cont=0, par=0;
	float media=0;
				
	for(i=0;i<V;i++)
	{
		printf("Insira um elemento [10 elementos, sendo um de cada vez]: ");
		scanf("%d", &vetor[i] );
		cont++;
		soma = soma + vetor[i];
	}
		media = soma/cont;
			
		for(i=0;i<V;i++)
		{
			if(vetor[i]>maior)
			{
				maior = vetor[i];
			}
			if(vetor[i]<menor)
			{
				menor = vetor[i];
			}		
			if(vetor[i]%2 == 0)
			{
				par = par + vetor[i];
			}
		} 	
			printf("\nA- A soma dos numeros digitados e %d:\n", soma);	
			printf("\nB- A quantidade de numeros digitados e %d\n", cont);
			printf("\nC- A media dos numeros digitados e %f:\n", media);
			printf("\nD- O menor valor inserido e %d:\n", menor);
			printf("\nE- O maior valor inserido e %d:\n", maior);	
			printf("\nF- A soma dos numeros pares e %d:\n", par);
}

int main()
{
	int vetor[V];
	int i, maior=0, menor = vetor[i], soma=0, cont=0, par=0;
	float media=0;
	operacoes(0);
	
	return 0;
	
}
	
	
