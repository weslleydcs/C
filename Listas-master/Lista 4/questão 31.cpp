#include <stdio.h>
#include <string.h>
#include <conio.h>

int trasprafrente(int i)
{
	char pala[60], InvPala[60];
	int j=0;
	
	printf("Palavra: ");
	gets(pala);
	for(i=0, j=(strlen(pala))-1; pala[i] != '\0'; i++, j--){
		InvPala[i]=pala[j];
	}
	InvPala[i]='\0';
	printf("\nPalavra digitada: %s", pala);
	printf("\nPalavra digitada invertida: %s", InvPala);
}

int main()
{
	char pala[60], InvPala[60];
	int j=0;
	trasprafrente(0);
	getch();
	return 0;
}
