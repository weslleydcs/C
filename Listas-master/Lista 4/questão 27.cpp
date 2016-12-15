#include <stdio.h>
#include <string.h>
#include <conio.h>

int quatroletras(int i)
{
	char str[255];
	
	printf("Digite uma string: ");
	gets(str);
	printf("As 4 primeiras letras da String sao: ");
	for(i=0; i<4; i++){
		printf("%c", str[i]);
	}
}

int main()
{
	int i;
	char str[255];
	quatroletras(0);
	getch();
	return 0;
}

