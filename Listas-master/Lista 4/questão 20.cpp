#include <stdio.h>

int main()
{
	char str[255];
	
	printf("Digite uma String[Maximo de 255 caracteres]:\n");
	gets(str);
	printf("\n\nVoce digitou: \n%s", str);
	
	return 0;
}

