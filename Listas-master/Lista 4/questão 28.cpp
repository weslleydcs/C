#include <stdio.h>
#include <string.h>
#include <conio.h>

char* aceita(char* nome)
{
	char sexo;
	int idade;
	
	printf("Sexo(M ou F): ");
	scanf("%c", &sexo);
	while((sexo != 'M') && (sexo != 'm') && (sexo != 'F') && (sexo != 'f')){
		printf("Digite sexo valido(M ou F): ");
		scanf("%c", &sexo);
	}
	printf("Idade: ");
	scanf("%d", &idade);
	
	if(((sexo=='F') || (sexo=='f')) && (idade<25))
		printf("%s - Aceita!", nome);
	else
		printf("NAO ACEITA!");
	getchar();
}

int main()
{
	char nome[55], sexo;
	int idade;
	printf("Digite seu nome: ");
	gets(nome);
	aceita(nome);
	return 0;
	
}

