#include <stdio.h>
#include <string.h>
#include <conio.h>

int frases(int i, int j=0)
{
	char frase[255], fraseAux[255];	
	printf("Digite uma frase qualquer:\n");
	gets(frase);
	
	for(i=0, j=0; i<=strlen(frase); i++){
		if (frase[i] != ' '){
			fraseAux[j]=frase[i];
			j++;
		}
	}
	printf("A frase resultante (sem espacos) eh:\n%s", fraseAux);
}

int main()
{
	char frase[255], fraseAux[255];
	frases(0,0);
	getch();
	return 0;
	
}

