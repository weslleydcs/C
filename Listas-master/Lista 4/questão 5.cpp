#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int ver_contd(const char *str, const char *str_final)
{		//Funcao para verificar se a segunda String esta contida no final da primeira.
	int dif, i;
	dif = strlen(str) - strlen(str_final);

	for(i = 0; i < dif; i++)
		str++;

	if(strcmp(str, str_final) == 0)
		return 1;					//Retorna 1 se a segunda string estiver contida.
	else
		return 0;					//Retorna 0 se a segunda string nao estiver contida.
}
 
int main()
{
	char str1[255], str2[255]; 
	
	printf("Digite uma String [Maximo de 255 caracteres]:\n");
	scanf("%s", str1);
	printf("\nDigite outra String [Maximo de 255 caracteres.]\n");
	scanf("%s", str2);
 
	if(ver_contd(str1, str2))
		printf("\n\nA segunda String esta contida no final da primeira.\n");
	else
		printf("\n\nA segunda String NAO esta contida no final da primeira.\n");
 
	return 0;
}
