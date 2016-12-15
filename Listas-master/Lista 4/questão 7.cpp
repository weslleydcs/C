#include <stdio.h>
#include <string.h>

int main()
{
	char str[255];
	int i, j=0;
	
	printf("Digite uma String[Max. 255]:\n");
	gets(str);
	
	char strAux[strlen(str)];
	
	for(i=0; i<=strlen(str); i++){
		if((str[i] != 'a') && (str[i] != 'e') && (str[i] != 'i') && (str[i] != 'o') && (str[i] != 'u') && (str[i] != 'A') && (str[i] != 'E') && (str[i] != 'I') && (str[i] != 'O') && (str[i] != 'U')){
			strAux[j]=str[i];
			j++;
		}
	}
	printf("\n\nString Digitada:\n%s", str);
	printf("\n\nString sem as vogais:\n%s", strAux);
	
	return 0;
}

