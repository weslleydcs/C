#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int escrevestr(){
	char nome[100];
	printf("Digite uma palavra de no maximo 100 caracteres: ");
	gets(nome);
	strlen(nome);
}

int main(){
	
	char nome[100];
	escrevestr();
	printf("A palavra tem %d letras", strlen(nome));
	
}









//printf("A palavra tem %d letras", strlen(nome));
