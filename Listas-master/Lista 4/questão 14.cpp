#include <stdio.h>
#include <string.h>

char *Palin(char *str)
{
	int i, j;
	char strInv[15];
	i=strlen(str);
	
	for(i=0;str[i];i++);
		i = i-1;
	for(j=0, i; i>=0; j++){
		strInv[j]=str[i];
		i--;
	}
	strInv[j]='\0';
	
	return strInv;
	
}

int main()
{
	char string[15];
	
	printf("Digite uma Palavra[Max. 15]:\n");
	gets(string);
	
	printf("\n\nPalavra digitada: %s", string);
	printf("\nPalavra invertida: %s", Palin(string));
	
	if(strcmp(string, Palin(string)) != 0)
		printf("\nNao eh palindromo!");
	else
		printf("\nEh palindromo!");
}
