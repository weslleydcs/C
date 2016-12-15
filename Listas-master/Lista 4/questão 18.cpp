#include <stdio.h>
#include <string.h>
#include <conio.h>

int mudarpalavra(int i)
{
	char c;
	char s[35];
	
	printf("Digite uma string:\n");
	gets(s);
	printf("\nDigite um caractere: ");
	scanf("%c", &c);
	printf("\nDigite um numero inteiro para indice: ");
	scanf("%d", &i);
	
	for(c = 0; s!='\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
		
	
	}

	printf("\n\nIndice da primeira posicao da String onde foi encontrado o caractere %s: %d", c, i);
}

int main()
{
	int i;
	char c;
	char s[35];
	mudarpalavra(i);
	
	return 0;
}
