#include <stdio.h>
#include <string.h>
#include <conio.h>

int tamanhodonome(int i)
{
	
	char nome[60];
	int tam=0;
	
	printf("Nome: ");
	gets(nome);
	for(i=0; nome[i] !='\0'; i++)
		tam++;
	printf("\nDados:\n");
	printf("Nome: %s.\nO tamanho do nome digitado e de %d letras.", nome, tam);
}

int main()
{
	char nome[60];
	int tam=0;
	tamanhodonome(0);
	getch();
	return 0;
}

