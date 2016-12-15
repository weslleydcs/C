#include<stdio.h>
#include<conio.h>

char* ascii(char x[])
{
	int i;
	for(i=0; x[i] != '\0'; i++){
		x[i]= x[i]+1;
	}
	return x;
}

int main()
{
	char palavra[50];
	printf("Digite uma palavra \n");
	scanf("%s", &palavra);
	
	printf("A palavra digita com 1 somado a cada letra fica assim : %s", ascii(palavra));
}
