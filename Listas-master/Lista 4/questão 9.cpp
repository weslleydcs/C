/* String minuscuça para maiuscula*/
#include<stdio.h>
#include<conio.h>
#include <string.h>
char* maiusculo(char str[])
{
		int i=0;
		int tam= strlen(str);
		for(i=0; i<tam; i++){
			str[i]= str[i]-32;
		}
	return str;
}

int main()
{
	char string[99];
	printf("Digite uma minuscula\n");
	gets(string);
	printf("A string digitada transformada em maiuscula fica assim %s\n",  maiusculo(string));
	
}
