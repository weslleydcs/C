#include <stdio.h>
#include <conio.h>

int nomecoma(int i)
{
	char nome[60];
	
	printf("Nome: ");
	gets(nome);
	if((nome[i]=='a') || (nome[i]=='A'))
		printf("Ola %s.", nome);
	else
		printf("Desculpe, seu nome nao comeca com 'a'.");
}

int main()
{
	char nome[60];
	int i;
	nomecoma(0);
	getch();
	return 0;
}

